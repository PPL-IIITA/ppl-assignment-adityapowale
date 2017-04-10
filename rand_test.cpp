#include "rand_test.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <time.h>

using namespace std;

int rand_test:: getRand() {

	int value;
	value = 1+rand()%100;
	return value;


}
void rand_test::generate(int n,int m)  {

	srand(time(NULL));

	ofstream myfile;
	myfile.open("Boys.csv");

	for (int i = 0; i < n; i++) {

		name = "Boy" + std::to_string(i+1);
		budget = 5*getRand();
		attractiveness = getRand();
		intelligence = getRand();
		type = getRand()%3;
		min_req = getRand();
		myfile<<name<<" , "<<attractiveness<<" , "<<intelligence<<" , "<<budget<<" , "<<type<<" , "<<min_req<<"\n";


	}
	myfile.close();

	srand(time(NULL));
	myfile.open("Girls.csv");

	for (int i = 0; i < m; i++) {

		name = "Girl"+ std::to_string(i+1);
		attractiveness = getRand();
		budget = 10*getRand();
		intelligence = getRand();
		type = getRand()%3;
		pre = getRand()%3;

		myfile<<name<<" , "<<attractiveness<<" , "<<intelligence<<" , "<<budget<<" , "<<type<<" , "<<pre<<"\n";



	}
	myfile.close();
	
	myfile.open("Gifts.csv");

	for (int i = 0; i < 1000; i++) {

		name = "Gift"+ std::to_string(i+1);
		type = getRand()%3;
		budget = getRand();
		if(budget < 30)
			budget += 50;
		intelligence = getRand();
		if(intelligence < 30) 
			intelligence += 50;

		myfile<<name<<" , "<<type<<" , "<<intelligence<<" , "<<budget<<"\n";



	}
	myfile.close();
}

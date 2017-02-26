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

		name = "Boy"+to_string(i+1);
		budget = 10*getRand();
		attractiveness = getRand();
		intelligence = getRand();
		type = getRand()%3;
		min_req = getRand();
		myfile<<name<<";"<<attractiveness<<";"<<budget<<";"<<intelligence<<";"<<type<<";"<<min_req<<"\n";


	}
	myfile.close();

	srand(time(NULL));
	myfile.open("Girls.csv");

	for (int i = 0; i < m; i++) {

		name = "Girl"+to_string(i+1);
		attractiveness = getRand();
		budget = 10*getRand();
		intelligence = getRand();
		type = getRand()%3;
		pre = getRand()%3;

		myfile<<name<<";"<<attractiveness<<";"<<budget<<";"<<intelligence<<";"<<type<<";"<<pre<<"\n";



	}
	myfile.close();


}

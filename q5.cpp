#include "boy.h"
#include "girl.h"
#include "couple.h"
#include "rand_test.h"
#include "input1.h"
#include "gift.h"

#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>


int main(int argc,char **argv)
{
	std::vector<Boy> b;
	std::vector<Girl> g;
	std::vector<Couple> c;
	std::vector<Gift> gi;
	int k = atoi(argv[1]);
	getinput1(b,g,c,gi);
	std::vector<Couple>::iterator it1;
	std::vector<Gift>::iterator it2,it3;
	cout<<endl;
	cout<<"GIFTS EXCHANGED "<<endl;
	cout<<endl;
	for(it1 = c.begin() ; it1 != c.end() ; it1++) {
		float temp = 0 , expense = 0;
		std::vector<Gift> gifts;
		gifts.clear();
		if(it1->b.gettype() == 0 || it1->b.gettype() == 1) {
			temp = expense = it1->b.getbudget();
			std::sort(gi.begin(),gi.end(),compareOnPriceAsc);
		}
		else {
			temp = expense = it1->g.getmaintainance_budget();
			std::sort(gi.begin(),gi.end(),compareOnPriceDesc);
		}
		for(it2 = gi.begin() ; it2 != gi.end() && expense > 0 ; it2++) {
			expense -= it2->price;
			gifts.push_back((*it2));
		}
		if(expense<0) {
			it1->setspend((float)(temp+((-1)*expense)));
		}
		else {
			it1->setspend((float)temp);
		}
		cout<<it1->g.getname() << " and " << it1->b.getname()<<endl;
		for(it3 = gifts.begin() ; it3 != gifts.end() ; it3++) {
			cout<<it3->name<<" value = "<<it3->value << " price = "<<it3->price<<endl;
		}
		cout<<endl;
		it1->savegifts(gifts);
		it1->gethappiness();
		it1->getcompatibility();
	}
	std::sort(c.begin(),c.end(),compareOnHappy);
	cout<<"K Happiest Couples are"<<endl;
	int j;
	for(j = 0 ; j < k ; j++) {
		cout<<c[j].b.getname()<<" and "<<c[j].g.getname()<< " Happiness = "<<c[j].happy<<endl;
	}
	cout<<endl;
	return 0;
}

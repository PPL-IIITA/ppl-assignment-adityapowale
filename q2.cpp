#include "boy.h"
#include "girl.h"
#include "couple.h"
#include "rand_test.h"
#include "input.h"
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
	getinput(b,g,c,gi);
	std::vector<Couple>::iterator it1;
	std::vector<Gift>::iterator it2;
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
		it1->savegifts(gifts);
		it1->gethappiness();
		it1->getcompatibility();
	}
	std::vector<Couple> copy1;
	std::vector<Couple> copy2;
	copy1 = c;
	copy2 = c;
	std::sort(copy1.begin(),copy2.end(),compareOnHappy);
	std::sort(copy2.begin(),copy2.end(),compareOnCompat);
	cout<<"K Happiest Couples are"<<endl;
	int j;
	for(j = 0 ; j < k ; j++) {
		cout<<copy1[j].g.getname()<<" and "<<copy1[j].b.getname()<< " Happiness = "<<copy1[j].happy<<endl;
	}
	cout<<"K Most Compatible couples"<<endl;
	for(j = 0 ; j < k ; j++) {
		cout<<copy2[j].g.getname()<<" and "<<copy2[j].b.getname()<< " Happiness = "<<copy1[j].compat<<endl;
	}
	return 0;
}

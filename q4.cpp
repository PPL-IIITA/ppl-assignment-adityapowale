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
	std::vector<Girl> g1;
	std::vector<Couple> c;
	std::vector<Gift> gi;
	int k = 3;
	getinput(b,g,c,gi);
	std::vector<Couple>::iterator it1;
	std::vector<Gift>::iterator it2,it3;
	cout<<endl;
//	cout<<"GIFTS EXCHANGED "<<endl;
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
/*		cout<<it1->g.getname() << " and " << it1->b.getname()<<endl;
		for(it3 = gifts.begin() ; it3 != gifts.end() ; it3++) {
			cout<<it3->name<<" value = "<<it3->value << " price = "<<it3->price<<endl;
		}
		cout<<endl;
*/		it1->savegifts(gifts);
		it1->gethappiness();
		it1->getcompatibility();
	}
	std::sort(c.begin(),c.end(),compareOnHappyd);
	cout<<"K Unhappiest Couples are"<<endl;
	int j;
	for(j = 0 ; j < k ; j++) {
		cout<<c[j].g.getname()<<" and "<<c[j].b.getname()<< " Happiness = "<<c[j].happy<<endl;
		g1.push_back(c[j].g);
	}
	cout<<endl;
	std::vector<Girl>::iterator it4;
	std::vector<Boy>::iterator i1;
	for(it4 = g1.begin() ; it4 != g1.end() ; it4++) {
		Boy temp;
		int flag = 0;
		if(it4->getbfcriterion() == 0) {
			for(i1 = b.begin() ; i1 != b.end() ; i1++) {
				if((it4->getmaintainance_budget() < i1->getbudget()) && (i1->getstatus() == false) && (i1->getminatt() < it4->getattractiveness())) {
					if(it4->getstatus() == false) {
						it4->setstatus(1);
						i1->setstatus(1);
						temp = *i1;
						flag = 1;
					}
					else if(temp.getattractiveness() < i1->getattractiveness()) {
						temp.setstatus(0);
						i1->setstatus(1);
						temp = *i1;
						flag = 1;
					}
				}
			}
		}
		else if(it4->getbfcriterion() == 1) {
			for(i1 = b.begin() ; i1 != b.end() ; i1++) {
				if((it4->getmaintainance_budget() < i1->getbudget()) && (i1->getstatus() == false) && (i1->getminatt() < it4->getattractiveness())) {
					if(it4->getstatus() == false) {
						it4->setstatus(1);
						i1->setstatus(1);
						temp = *i1;
						flag = 1;
					}
					else if(temp.getintelligence() < i1->getintelligence()) {
						temp.setstatus(0);
						i1->setstatus(1);
						temp = *i1;
						flag = 1;
					}
				}
			}
		}
		else if (it4->getbfcriterion() == 2) {
			for(i1 = b.begin() ; i1 != b.end() ; i1++) {
				if((it4->getmaintainance_budget() < i1->getbudget()) && (i1->getstatus() == false) && (i1->getminatt() < it4->getattractiveness())) {
					if(it4->getstatus() == false) {
						it4->setstatus(1);
						i1->setstatus(1);
						temp = *i1;
						flag = 1;
					}
					else if(temp.getbudget() < i1->getbudget()) {
						temp.setstatus(0);
						i1->setstatus(1);
						temp = *i1;
						flag = 1;
					}
				}
			}
		}
		if(flag == 0)
			continue;
		Couple c1(&temp,&(*it4));
		c.push_back(c1);
	}
	g.clear();
	b.clear();
	gi.clear();
	for(j = 0 ; j < 4 ; j++) {
		cout<<c[j+k-1].g.getname()<<" and "<<c[j+k-1].b.getname()<<endl;
	}
	return 0;
}

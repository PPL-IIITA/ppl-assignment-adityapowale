#include "input.h"
#include "boy.h"
#include "girl.h"

#include <fstream>
#include <iostream>
#include <cstdlib>

void getinput(std::vector<Boy> &b, std::vector<Girl> &g)
{
	std::ifstream input;
	input.open("Boys.csv", std::ios::in);

	while(!input.eof()) {
		std::string name;
		std::string ign;
		int attractiveness;
		int intelligence;
		float budget;
		int min_req;
		int type;
		input >> name >> ign >> attractiveness >> ign >> intelligence >> ign >> budget >> ign >> type >> ign >> min_req;
		Boy b1(name,attractiveness,intelligence,budget,min_req,type);
		b.push_back(b1);
	}
	b.pop_back();
	input.close();

	input.open("Girls.csv", std::ios::in);

	while(!input.eof()) {
		std::string name;
		std::string ign;
		int attractiveness;
		int intelligence;
		float budget;
		int type;
		int pre;
		input >> name >> ign >> attractiveness >> ign >> intelligence >> ign >> budget >> ign >> type >> ign >> pre;
		Girl g1(name,attractiveness,intelligence,budget,pre,type);
		g.push_back(g1);
	}
	g.pop_back();
	input.close();
	std::vector<Boy>::iterator i1;
	std::vector<Girl>::iterator i2;
	for(i2 = g.begin() ; i2 != g.end() ; i2++) {

		Boy temp;
		if(i2->getbfcriterion() == 0) {
			for(i1 = b.begin() ; i1 != b.end() ; i1++) {
				if((i2->getmaintainance_budget() < i1->getbudget()) && (i1->getstatus() == false) && (i1->getminatt() < i2->getattractiveness())) {
					if(i2->getstatus() == false) {
						i2->setstatus(1);
						i1->setstatus(1);
						temp = *i1;
					}
					else if(temp.getattractiveness() < i1->getattractiveness()) {
						temp.setstatus(0);
						i1->setstatus(1);
						temp = *i1;
					}
				}
			}
		}
		else if(i2->getbfcriterion() == 1) {
			for(i1 = b.begin() ; i1 != b.end() ; i1++) {
				if((i2->getmaintainance_budget() < i1->getbudget()) && (i1->getstatus() == false) && (i1->getminatt() < i2->getattractiveness())) {
					if(i2->getstatus() == false) {
						i2->setstatus(1);
						i1->setstatus(1);
						temp = *i1;
					}
					else if(temp.getintelligence() < i1->getintelligence()) {
						temp.setstatus(0);
						i1->setstatus(1);
						temp = *i1;
					}
				}
			}
		}
		else if (i2->getbfcriterion() == 2) {
			for(i1 = b.begin() ; i1 != b.end() ; i1++) {
				if((i2->getmaintainance_budget() < i1->getbudget()) && (i1->getstatus() == false) && (i1->getminatt() < i2->getattractiveness())) {
					if(i2->getstatus() == false) {
						i2->setstatus(1);
						i1->setstatus(1);
						temp = *i1;
					}
					else if(temp.getbudget() < i1->getbudget()) {
						temp.setstatus(0);
						i1->setstatus(1);
						temp = *i1;
					}
				}
			}
		}
		std::cout << i2->getname() <<" " << temp.getname() << std::endl;
	}
}

#include "input.h"

#include <fstream>
#include <iostream>
#include <cstdlib>

void getinput(std::vector<Boy> &b, std::vector<Girl> &g)
{
	std::ifstream input;
	input.open(Boys.csv, std::ios,in);

	while(!input.eof()) {
		std::string name;
		std::string ign;
		int attractiveness;
		int intelligence;
		float budget;
		int min_req;
		int type;
		input >> name >> ign >> attractiveness >> ign >> intelligence >> ign >> budget >> ign >> min_req >> ign >> type;
		Boy b1(name,attractiveness,intelligence,budget,min_req,type);
		b.push_back(b1);
	}
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

}

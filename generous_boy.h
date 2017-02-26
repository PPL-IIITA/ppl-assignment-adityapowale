#ifndef GENEROUSBOY_H
#define GENEROUSBOY_H

#include <string>

class Generous_Boy
{
	//atrributes//
	private:
		std::string name;
		int attractiveness;
		int intelligence;
		float budget;
		int min_attractive_req;
		char status;
		std::string gfname;

	//functions//
	public:
		Generous_Boy(std::string name, int attractiveness, int intelligence, float budget, int min_req);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getbudget();
		bool getstatus();
		void setstatus();
};
#endif

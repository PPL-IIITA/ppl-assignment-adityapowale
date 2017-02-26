#ifndef GEEKBOY_H
#define GEEKBOY_H

#include <string>

class Geek_Boy
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
		std::string nature;

	//functions//
	public:
		Geek_Boy(std::string name, int attractiveness, int intelligence, float budgetnt min_req);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getbudget();
		bool getstatus();
		void setstatus();
};
#endif

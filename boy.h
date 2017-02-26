#ifndef BOY_H
#define BOY_H

#include <string>

class Boy
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
		int type;

	//functions//
	public:
		Boy();
		Boy(std::string name, int attractiveness, int intelligence, float budget, int min_req, int type);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getbudget();
		bool getstatus();
		void setstatus(int i);
		int gettype();
		int getminatt();
};
#endif

#ifndef CHOOSYGIRL_H
#define CHOOSYGIRL_H

#include <string>

class Choosy_Girl
{
	//atrributes//
	private:
		std::string name;
		int attractiveness;
		int intelligence;
		float maintainance;
		char status;
		std::string bfname;
		std::string bfcriterion;

	//functions//
	public:
		Choosy_Girl(std::string name, int attractiveness, int intelligence, float budget, std::string criterion);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getmaintainance_budget();
		bool getstatus();
		void setstatus();
};
#endif

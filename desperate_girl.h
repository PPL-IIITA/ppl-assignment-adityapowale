#ifndef DESPERATEGIRL_H
#define DESPERATEGIRL_H

#include <string>

class Desperate_Girl
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

	//funtions//
	public:
		Desperate_Girl(std::string name, int attractiveness, int intelligence, float maintainance_budget, std::string criterion);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getmaintainance_budget();
		bool getstatus();
		void setstatus();
};
#endif

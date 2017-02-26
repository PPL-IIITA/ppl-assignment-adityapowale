#ifndef GIRL_H
#define GIRL_H

#include <string>

class Girl
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
		int type;

	//functions//
	public:
		Girl(std::string name, int attractiveness, int intelligence, float budget, std::string criterion, int type);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getmaintainance_budget();
		bool getstatus();
		void setstatus();
		int gettype();
};
#endif

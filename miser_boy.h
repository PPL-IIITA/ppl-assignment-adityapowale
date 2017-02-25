#ifndef MISERBOY_H
#define MISERBOY_H

#include <string>

class Miser_Boy
{
	private:
		std::string name;
		int attractiveness;
		int intelligence;
		float budget;
		int min_attractive_req;

	public:
		Miser_Boy(std::string name, int attractiveness, int intelligence, float budget);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getbudget();
};
#endif

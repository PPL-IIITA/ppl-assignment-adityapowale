#ifndef GENEROUSBOY_H
#define GENEROUSBOY_H

#include <string>

class Generous_Boy
{
	private:
		std::string name;
		int attractiveness;
		int intelligence;
		float budget;
		int min_attractive_req;

	public:
		Generous_Boy(std::string name, int attractiveness, int intelligence, float budget);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getbudget();
};
#endif

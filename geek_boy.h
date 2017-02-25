#ifndef GEEKBOY_H
#define GEEKBOY_H

#include <string>

class Geek_Boy
{
	private:
		std::string name;
		int attractiveness;
		int intelligence;
		float budget;
		int min_attractive_req;

	public:
		Geek_Boy(std::string name, int attractiveness, int intelligence, float budget);
		std::string getname();
		int getattractiveness();
		int getintelligence();
		float getbudget();
};
#endif

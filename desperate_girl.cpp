#include "desperate_girl.h"
#include <string.h>

Desperate_Girl::Desperate_Girl(std::string name, int attractiveness, int intelligence, float budget, std::string criteria)
{
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->maintainance = budget;
	this->bfcriterion = criteria;
	this->status = 'N';
}

void Desperate_Girl::setstatus()
{
	this->status = 'C';
}

bool Desperate_Girl::getstatus()
{
	if(status == 'N')
		return false;
	else
		return true;
}

int Desperate_Girl::getattractiveness()
{
	return this->attractiveness;
}

int Desperate_Girl::getintelligence()
{
	return this->intelligence;
}

float Desperate_Girl::getmaintainance_budget()
{
	return this->maintainance;
}

std::string Desperate_Girl::getname()
{
	return this->name;
}

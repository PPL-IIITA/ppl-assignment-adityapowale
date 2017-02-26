#include "choosy_girl.h"
#include <string.h>

Choosy_Girl::Choosy_Girl(std::string name, int attractiveness, int intelligence, float budget, std::string criteria)
{
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->maintainance = budget;
	this->bfcriterion = criteria;
	this->status = 'N';
}

void Choosy_Girl::setstatus()
{
	this->status = 'C';
}

bool Choosy_Girl::getstatus()
{
	if(status == 'N')
		return false;
	else
		return true;
}

int Choosy_Girl::getattractiveness()
{
	return this->attractiveness;
}

int Choosy_Girl::getintelligence()
{
	return this->intelligence;
}

float Choosy_Girl::getmaintainance_budget()
{
	return this->maintainance;
}

std::string Choosy_Girl::getname()
{
	return this->name;
}

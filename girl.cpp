#include "girl.h"
#include <string.h>

Girl::Girl(std::string name, int attractiveness, int intelligence, float budget, std::string criteria, int type)
{
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->maintainance = budget;
	this->bfcriterion = criteria;
	this->status = 'N';
	this->type = type;
}

void Girl::setstatus()
{
	this->status = 'C';
}

bool Girl::getstatus()
{
	if(status == 'N')
		return false;
	else
		return true;
}

int Girl::getattractiveness()
{
	return this->attractiveness;
}

int Girl::getintelligence()
{
	return this->intelligence;
}

float Girl::getmaintainance_budget()
{
	return this->maintainance;
}

std::string Girl::getname()
{
	return this->name;
}

int Girl::gettype()
{
	return this->type;
}
#include "normal_girl.h"
#include <string.h>

Normal_Girl::Normal_Girl(std::string name, int attractiveness, int intelligence, float budget, std::string criteria)
{
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->maintainance = budget;
	this->bfcriterion = criteria;
	this->status = 'N';
}

void Normal_Girl::setstatus()
{
	this->status = 'C';
}

bool Normal_Girl::getstatus()
{
	if(status == 'N')
		return false;
	else
		return true;
}

int Normal_Girl::getattractiveness()
{
	return this->attractiveness;
}

int Normal_Girl::getintelligence()
{
	return this->intelligence;
}

float Normal_Girl::getmaintainance_budget()
{
	return this->maintainance;
}

std::string Normal_Girl::getname()
{
	return this->name;
}

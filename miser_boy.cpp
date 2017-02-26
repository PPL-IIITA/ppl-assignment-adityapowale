#include "miser_boy.h"
#include <string>

Miser_Boy::Miser_Boy(std::string name, int attractiveness, int intelligence, float budget, int min_req)
{
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->budget = budget;
	this->min_attractive_req = min_req;
	this->status = 'N';
}

void Miser_Boy::setstatus()
{
	this->status = 'C';
}

bool Miser_Boy::getstatus()
{
	if(status == 'N')
		return false;
	else
		return true;
}

std::string Miser_Boy::getname()
{
	return name;
}

int Miser_Boy::getintelligence()
{
	return this->intelligence;
}

int Miser_Boy::getattractiveness()
{
	return this->attractiveness;
}

float Miser_Boy::getbudget()
{
	return this->budget;
}

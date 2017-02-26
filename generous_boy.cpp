#include "generous_boy.h"
#include <string>

Generous_Boy::Generous_Boy(std::string name, int attractiveness, int intelligence, float budget, int min_req)
{
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->budget = budget;
	this->min_attractive_req = min_req;
	this->status = 'N';
}

void Generous_Boy::setstatus()
{
	this->status = 'C';
}

bool Generous_Boy::getstatus()
{
	if(status == 'N')
		return false;
	else
		return true;
}

std::string Generous_Boy::getname()
{
	return name;
}

int Generous_Boy::getintelligence()
{
	return this->intelligence;
}

int Generous_Boy::getattractiveness()
{
	return this->attractiveness;
}

float Generous_Boy::getbudget()
{
	return this->budget;
}

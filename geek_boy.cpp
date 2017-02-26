#include "geek_boy.h"
#include <string>

Geek_Boy::Geek_Boy(std::string name, int attractiveness, int intelligence, float budget, int min_req)
{
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->budget = budget;
	this->min_attractive_req = min_req;
	this->status = 'N';
}

void Geek_Boy::setstatus()
{
	this->status = 'C';
}

bool Geek_Boy::getstatus()
{
	if(status == 'N')
		return false;
	else
		return true;
}

std::string Geek_Boy::getname()
{
	return name;
}

int Geek_Boy::getintelligence()
{
	return this->intelligence;
}

int Geek_Boy::getattractiveness()
{
	return this->attractiveness;
}

float Geek_Boy::getbudget()
{
	return this->budget;
}

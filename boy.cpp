#include "boy.h"
#include <string>

Boy::Boy()
{
}

Boy::Boy(std::string name, int attractiveness, int intelligence, float budget, int min_req,int type)
{
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->budget = budget;
	this->min_attractive_req = min_req;
	this->status = 'N';
	this->type = type;
}

void Boy::setstatus(int i)
{
	if (i == 1)
		this->status = 'C';
	else if(i == 0)
		this->status = 'N';
}

bool Boy::getstatus()
{
	if(status == 'N')
		return false;
	else
		return true;
}

std::string Boy::getname()
{
	return name;
}

int Boy::getintelligence()
{
	return this->intelligence;
}

int Boy::getattractiveness()
{
	return this->attractiveness;
}

float Boy::getbudget()
{
	return this->budget;
}

int Boy::gettype()
{
	return this->type;
}

int Boy::getminatt()
{
	return this->min_attractive_req;
}

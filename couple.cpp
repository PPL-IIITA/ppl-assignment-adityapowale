#include "couple.h"
#include "boy.h"
#include "girl.h"
#include "gift.h"
#include <string>
#include <cmath>
#include <vector>

Couple::Couple()
{
}

bool compareOnHappy(Couple c1 , Couple c2)
{
	return (c1.happy > c2.happy);
}

bool compareOnCompat(Couple c1 , Couple c2)
{
	return (c1.compat > c2.compat);
}

Couple::Couple(Boy *b ,Girl *g)
{
	this->b = *b;
	this->g = *g;
}

void Couple::savegifts(std::vector<Gift> &a)
{
	std::vector<Gift>::iterator i;
	for(i = a.begin() ; i != a.end() ; i++) {
		this->gifts.push_back(*i);
	}
}

void Couple::setspend(float p)
{
	this->spend = p;
}

float Couple::gethappiness()
{
	float gh;
	if(g.gettype() == 0)
		gh = exp(((int)this->spend)%10);
	else if(g.gettype() == 1) {
		gh = this->spend;
	}
	else {
		gh = log10(this->spend);
	}
	float bh;
	if(b.gettype() == 0) {
		bh = b.getbudget() - this->spend;
	}
	else if(b.gettype() == 1) {
		bh = gh;
	}
	else {
		bh = g.getintelligence();
	}
	this->happy = bh+gh;
	return (bh+gh);
}

float Couple::getcompatibility()
{
	float r;
	r = b.getbudget() - g.getmaintainance_budget();
	r += fabs(float(b.getattractiveness() - g.getattractiveness()));
	r += fabs(float(b.getintelligence() - g.getintelligence()));
	this->compat = r;
	return r;
}

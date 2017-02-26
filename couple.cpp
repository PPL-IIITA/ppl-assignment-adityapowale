#include "couple.h"
#include "boy.h"
#include "girl.h"
#include "gift.h"
#include <string>
#include <cmath>


Couple::Couple()
{
}


Couple::Couple(Boy *b ,Girl *g)
{
	this->b = *b;
	this->g = *g;
}

void Couple::savegifts(Gift *a,int count)
{
	int i;
	for(i = 0 ; i < count ; i++) {
		this->gi[i] = a[i];
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
	return (bh+gh);
}

float Couple::getcompatibility()
{
	float r;
	r = b.getbudget() - g.getmaintainance_budget();
	r += fabs(float(b.getattractiveness() - g.getattractiveness()));
	r += fabs(float(b.getintelligence() - g.getintelligence()));
	return r;
}

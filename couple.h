#ifndef COUPLE_H
#define COUPLE_H
#include "boy.h"
#include "girl.h"
#include "gift.h"
#include <string>

class Couple
{
	public:
		Boy b;
		Girl g;
		Couple();
		Couple(Boy *,Girl *);
		Gift gi[100];
		float spend;
		void savegifts(Gift *,int );
		void setspend(float);
		float gethappiness();
		float getcompatibility();
};
#endif

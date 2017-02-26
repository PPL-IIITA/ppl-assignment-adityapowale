#ifndef COUPLE_H
#define COUPLE_H
#include "boy.h"
#include "girl.h"
#include "gift.h"
#include <string>
#include <vector>

class Couple
{
	public:
		Boy b;
		Girl g;
		Couple();
		Couple(Boy *,Girl *);
		std::vector<Gift> gifts;
		float spend;
		void savegifts(std::vector<Gift> &gi);
		void setspend(float);
		float gethappiness();
		float getcompatibility();
		float happy;
		float compat;
};

bool compareOnHappy(Couple,Couple);
bool compareOnCompat(Couple,Couple);

#endif

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
		Boy b;/*!< object of boy*/

		Girl g;/*!< object of girl*/

		Couple();/*!< default constructor*/

		Couple(Boy *,Girl *);/*!< constructor*/

		std::vector<Gift> gifts;/*!< a vector of gifts exchanged*/

		float spend;/*!< money spent*/

		void savegifts(std::vector<Gift> &gi);/*!< funtion which saves gifts given*/

		void setspend(float);/*!< sets money spent*/

		float gethappiness();/*!< returns happiness*/

		float getcompatibility();/*!< returns happiness*/

		float happy;/*!< happiness of couple*/

		float compat;/*!< compatibility of couple*/

};

bool compareOnHappy(Couple,Couple);/*!< funtion to compare happiness used for sorting*/

bool compareOnCompat(Couple,Couple);/*!< function to compare compatibility used for sorting*/


#endif

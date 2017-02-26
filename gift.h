#ifndef GIFT_H
#define GIFT_H

#include <iostream>

class Gift
{
public:
    std::string name;
    int type;
    int price;
    int value;
    bool gifted;

    Gift();
    Gift(std::string name, int type, int price, int value);
};


bool compareOnValue (Gift g1, Gift g2);
bool compareOnPriceAsc (Gift g1, Gift g2);
bool compareOnPriceDesc (Gift g1, Gift g2);

#endif

#ifndef GIFT_H
#define GIFT_H

#include <iostream>

class Gift
{
public:
    std::string name;/*!< name of gift*/

    int type;/*!< type of gift*/

    int price;/*!< price of gift*/

    int value;/*!< value of gift*/


    Gift();/*!< default constructor*/

    Gift(std::string name, int type, int price, int value);/*!< constructor*/

};


bool compareOnValue (Gift g1, Gift g2);/*!< utility fuction for sorting*/

bool compareOnPriceAsc (Gift g1, Gift g2);/*!< utility fuction for sorting*/

bool compareOnPriceDesc (Gift g1, Gift g2);/*!< utility fuction for sorting*/


#endif

#include "boy.h"
#include "girl.h"
#include "couple.h"
#include "rand_test.h"
#include "input.h"
#include "gift.h"

#include <vector>
#include <iostream>


int main(int argc,int **argv)
{
	int bo = atoi(argv[1]);
	int gir = atoi(argv[2]);
	std::vector<Boy> b;
	std::vector<Girl> g;
	std::vector<Couple> c;
	std::vector<Gift> gi;
	rand_test ge;
	ge.generate(bo,gir);
	getinput(b,g,c,gi);
	return 0;
}

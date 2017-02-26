#include "boy.h"
#include "girl.h"
#include "rand_test.h"
#include "input.h"
#include <vector>
#include <iostream>


int main()
{
	std::vector<Boy> b;
	std::vector<Girl> g;
	rand_test ge;
	ge.generate(100,10);
	getinput(b,g);
	return 0;
}

#ifndef TEST_H
#define TEST_H
#include <string>

using namespace std;

class rand_test {

	public:
		string name;
		int attractiveness;
		int budget;
		int intelligence;
		int type;
		int min_req;
		int pre;
		void generate(int n,int m);
	private:
		int getRand();

};
#endif

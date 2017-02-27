#ifndef TEST_H
#define TEST_H
#include <string>

using namespace std;

class rand_test {

	public:
		string name;/*!< for storing name*/
		int attractiveness;/*!< for storing attractiveness*/

		int budget;/*!< fro storing budget*/

		int intelligence;/*!< for storing intelligence*/

		int type;/*!< for storing type*/

		int min_req;/*!< for storing min requirement*/

		int pre;/*!< for storing preference*/

		void generate(int n,int m);/*!< functons which generates random input of boys, girls and gifts*/

	private:
		int getRand();/*!< returns a random value*/


};
#endif

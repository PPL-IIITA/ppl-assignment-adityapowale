#ifndef BOY_H
#define BOY_H

#include <string>

class Boy
{
	//atrributes//
	private:
		std::string name; /*!< name of the boy*/
		int attractiveness;/*!< attaractivenessof boy*/
		int intelligence;/*!< intelligence of boy*/
		float budget;/*!< budget of boy*/

		int min_attractive_req;/*!< min requirement of boy*/

		char status;/*!< status of boy*/

		std::string gfname;/*!<*/

		std::string nature;/*!< nature of boy*/

		int type;/*!< type of boy*/


	//functions//
	public:
		Boy();/*!< default constructor*/

		Boy(std::string name, int attractiveness, int intelligence, float budget, int min_req, int type);/*!< constructor*/

		std::string getname();/*!< returns name*/

		int getattractiveness();/*!< return attractiveness*/

		int getintelligence();/*!< return intelligence*/

		float getbudget();/*!< returns budget*/

		bool getstatus();/*!< returns status*/

		void setstatus(int i);/*!< sets status*/

		int gettype();/*!< returns type*/

		int getminatt();/*!< returns min requirement*/

};
#endif

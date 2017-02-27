#ifndef GIRL_H
#define GIRL_H

#include <string>

class Girl
{
	//atrributes//
	private:
		std::string name;/*!< Girl's name*/
		int attractiveness;/*!< attractiveness*/

		int intelligence;/*!< intelligence*/

		float maintainance;/*!< maintainance budget*/

		char status;/*!< status*/

		std::string bfname;/*!< */

		int bfcriterion;/*!< criteria for choosing bf*/

		int type;/*!< type of girl*/


	//functions//
	public:
		Girl();/*!< default constructor*/

		Girl(std::string name, int attractiveness, int intelligence, float budget, int criterion, int type);/*!< constructor*/

		std::string getname();/*!< returns name*/

		int getattractiveness();/*!< returns attractiveness*/

		int getintelligence();/*!< returns intelligence*/

		float getmaintainance_budget();/*!< returns maintainance budget*/

		bool getstatus();/*!< returns status*/

		void setstatus(int i);/*!< sets status*/

		int getbfcriterion();/*!< returns criteria for choosing bf*/

		int gettype();/*!< returns type*/

};
#endif

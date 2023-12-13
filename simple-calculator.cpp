#include <iostream>
#include <fstream>
#include <cmath>
//The bones of the program lies in these header files. :D
#include "variables.hpp"
#include "math-functions.hpp"

std::string name;
double double1;
double double2;
char asmd;

int main()
{
	//The meat of the program.
	std::cout << "Simple Calculator\n";
	std::cout << " \n";

	//Introduction. (for debugging)
	std::cout << "What is your name?\n";
	std::cin >> name;
	
	//Creates user file.
	std::ofstream namedata("user.txt");
	namedata << name << "\n";
	namedata.close();

	std::cout << "Welcome to my simple calculator, " << name << ".\n";
	std::cout << " \n";
	std::cout << " \n";
	std::cout << " \n";

	while (true) {
	//The real reason you are using this program. :)
	std::cout << "Equation (2 numbers!): ";
	std::cin >> double1 >> double2;

	//Confirmation of inputs. (for debugging)
	std::cout << "[" << double1 << "] [" << double2 << "]\n";

	//User input for simple equation.
	std::cout << "[+][-][*][/][q]\n";
	std::cin >> asmd;

	//Equation final output. :D
	switch (asmd) {
	case  '+':
		adding();
		break;
	case '-' :
		subtracting();
		break;
	case '*' :
		multiplying();
		break;
	case '/' :
		dividing();
		break;
	case 'q':
		return 0;
	default:
		"Invalid input!\n";
		break;
		}
	}
	return 0;
}
#include <iostream>
#include <fstream>
#include <cmath>
#include <limits>
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
	std::ofstream namedata("name.udta");
	namedata << name << "\n";
	namedata.close();

	std::cout << "Welcome to my simple calculator, " << name << ".\n";
	std::cout << " \n";
	std::cout << " \n";
	std::cout << " \n";

	while (true) {
	//The real reason you are using this program. :)
	std::cout << "Equation (2 numbers!): ";

	//Added this 2 while-loops to make sure only numbers are chosen
        while (!(std::cin >> double1)) {
        std::cin.clear(); // Fehlerzustand löschen
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Puffer leeren
        std::cout << "The first number was not valid. Please enter only numbers: ";
        }

	std::cout<<"Add the second number: ";
	while (!(std::cin >> double2)) {
        std::cin.clear(); // Fehlerzustand löschen
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Puffer leeren
        std::cout << "The second number was not valid. Please enter only numbers: ";
        }

	//Confirmation of inputs. (for debugging)
	std::cout << " \n";
	std::cout << "[" << double1 << "] [" << double2 << "]\n";
	std::cout << " \n";

	//User input for simple equation.
	std::cout << "[+][-][*][/][q][s][%]\n";
	//Added again a while-loop to make sure picking the right operations
	while(std::cin >> asmd){
	if(asmd=='+' || asmd=='-' || asmd=='*' || asmd=='/' || asmd=='q' || asmd=='s' || asmd=='%'){
	break;
	}
	else{
	std::cout<<"Please enter one of the following operations only: [+][-][*][/][q][s][%] \n";
	std::cin.clear();
	}
	}
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
		break;
	case 's':
		squareroot_or_powerof();
		break;
	case '%':
	    modulo();
		break;
		}
	}
	return 0;
}

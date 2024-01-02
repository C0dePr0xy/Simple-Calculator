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
	std::ofstream namedata("name.udta");
	namedata << name << "\n";
	namedata.close();

	std::cout << "Welcome to my simple calculator, " << name << ".\n";
	std::cout << " \n";
	std::cout << " \n";
	std::cout << " \n";

	while (true) {
	//The real reason you are using this program. :)
	std::cout << "Equation (2 numbers or 1?): ";
	int equationNumber;
	std::cin>>equationNumber;

	//added this if-statement for operations with 1 number and other math operations
	if(equationNumber==1){
		std::cout<<"Your number please: "<<std::endl;
		double chosenNumber;
		std::cin>>chosenNumber;
		std::cout<<"If you want the square root then type \'r\' or if you want to the power then type \'^\'"<<std::endl;
		char chosenOp;
		while(std::cin>>chosenOp){
			if(chosenOp == '^' || chosenOp == 'r'){
				break;
			}
			else{
				std::cout<<"Please try again. You can only choose \"r\" or \"^\""<<std::endl;
				std::cin.clear();
			}
		}
		if(chosenOp=='^'){
			int squareNumber;
			std::cout<<"Add a power number: "<<std::endl;
			std::cin>>squareNumber;
			std::cout<<chosenNumber<<"^"<<squareNumber<<" = "<<pow(chosenNumber,squareNumber)<<std::endl;
		}
		if(chosenOp=='r'){
			std::cout<<"The sqaure root of "<<chosenNumber<<" is "<<sqrt(chosenNumber)<<" ."<<std::endl;
		}
		
	}
	else{
	std::cin >> double1 >> double2;

	//Confirmation of inputs. (for debugging)
	std::cout << " \n";
	std::cout << "[" << double1 << "] [" << double2 << "]\n";
	std::cout << " \n";

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
		break;
	default:
		"Syntax Error!\n";
		break;
		}
	}
	}
	return 0;
}

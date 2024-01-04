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
	std::cout << "Enter \'2\' for equations with two numbers or \'1\'for equations with one number: ";
	int equationNumber;

	//Added this while-loop to make sure picking 1 or 2
	while(std::cin>>equationNumber){
		if(equationNumber!=1 && equationNumber!= 2){
		std::cout<<"Please enter only \'1\' or \'2\': ";
		}
		else break;
	}


	//If Operation with 1 number is chosen
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
				std::cout<<"Please try again. You can only choose \'r\' or \'^\'"<<std::endl;
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


	//If the Operation with 2 numbers is chosen
	else {
	std::cout<<"Add the first number: ";

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
	std::cout << "Choose one of the following operations: [+][-][*][/][q]\n";

	//Added again a while-loop to make sure picking the right operations
	while(std::cin >> asmd){
		if(asmd=='+' || asmd=='-' || asmd=='*' || asmd=='/' || asmd=='q'){
			break;
		}
		else{
			std::cout<<"Please enter one of the following operations only: [+][-][*][/][q] \n";
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
		}
	}
	}
	return 0;
}

#include <iostream>
#include "variables.hpp"
#include <fstream>
#include <cmath>

std::ofstream mathdata("history.mdta");

//Handles addition.
void adding() {
	//Math Operation.
	std::cout << double1 + double2 << "\n";

	//Generates text file to store last known equation.
	mathdata.open("history.mdta");
	mathdata << "--------------------------------------------------------\n";
	mathdata << "[" << double1 << "]" << " + " << "[" << double2 << "]\n";
	mathdata << " = " << double1 + double2 << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
}

//Handles subtraction.
void subtracting() {
	//Math Operation.
	std::cout << double1 - double2 << "\n";

	//Generates text file to store last known equation.
	mathdata.open("history.mdta");
	mathdata << "--------------------------------------------------------\n";
	mathdata << "[" << double1 << "]" << " - " << "[" << double2 << "]\n";
	mathdata << " = " << double1 - double2 << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
}

//Handles multiplication.
void multiplying() {
	//Math Operation.
	std::cout << double1 * double2 << "\n";

	//Generates text file to store last known equation.
	mathdata.open("history.mdta");
	mathdata << "--------------------------------------------------------\n";
	mathdata << "[" << double1 << "]" << " * " << "[" << double2 << "]\n";
	mathdata << " = " << double1 * double2 << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
}

//Handles division.
void dividing() {
	//Math Operation.
	std::cout << double1 / double2 << "\n";

	//Generates text file to store last known equation.
	mathdata.open("history.mdta");
	mathdata << "--------------------------------------------------------\n";
	mathdata << "[" << double1 << "]" << " / " << "[" << double2 << "]\n";
	mathdata << " = " << double1 / double2 << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
}

//Handles square root and power of functionality thanks to Saif Darwish.
//This code will have history functionality later. (C0dePr0xy)
void squareroot_or_powerof() {
	std::cout << "Equation (2 numbers or 1?): ";
	int equationNumber;
	std::cin>>equationNumber;

	//added this if-statement for operations with 1 number and other math operations (Saif Darwish)
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
		
		
			//Generates text file to store last known equation.
	mathdata.open("history.mdta");
	mathdata << "--------------------------------------------------------\n";
	mathdata << "[" << chosenNumber<<"^"<<squareNumber<< "]"]\n";
	mathdata << " = " << pow(chosenNumber,squareNumber) << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
		    
		}
		if(chosenOp=='r'){
			std::cout<<"The sqaure root of "<<chosenNumber<<" is "<<sqrt(chosenNumber)<<" ."<<std::endl;
		
			//Generates text file to store last known equation.
	mathdata.open("history.mdta");
	mathdata << "--------------------------------------------------------\n";
	mathdata << "The sqaure root of ["<<chosenNumber<<"] is ["<<sqrt(chosenNumber)<< "]\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
		
		}
	}
}

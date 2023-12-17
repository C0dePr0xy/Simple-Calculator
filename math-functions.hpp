#include <iostream>
#include "variables.hpp"
#include <fstream>

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
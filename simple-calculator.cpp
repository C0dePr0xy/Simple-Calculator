#include <iostream>
#include <fstream>
#include <cmath>
#include <limits>
#include <filesystem>
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

	std::cout << "Welcome to my simple calculator, " << name << ".\n";
	std::cout << " \n";
	std::cout << " \n";
	std::cout << " \n";

	while (true) {

	//After adding input to history file this section provides the posibilty to clear history
	if (std::filesystem::exists("history.mdta") && std::filesystem::file_size("history.mdta") != 0) {
	char temp;
	std::cout<<"Do you want to clear the history? [y] for yes or [n] for no\n";
	while(std::cin>>temp){
	if(temp=='y'){
	asmd='c';
    goto clear;
	}
	if(temp=='n'){
	break;
	}
	else
	std::cout<<"Please Enter only [y] or[n]:\n";
	}
    }

	//After the first use this section provides posibilty to end the program
	static int usage=false;
	if(usage==true){
	std::cout<<"Do you want to quit now? [y] for yes or [n] for no\n";
	char temp;
	while(std::cin>>temp){
	if(temp=='y'){
	asmd='q';
	goto quit;
	}
	if(temp=='n'){
	break;
	}
    else
	{
	std::cout<<"Please enter [y] or [n] only.\n";
	std::cin.clear();
	}
	}
	}
	usage=true;

	//The real reason you are using this program. :)
	std::cout << "Enter Equation (2 numbers!):";

	//Added this 2 while-loops to make sure only numbers are chosen
    while (!(std::cin >> double1)) {
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cout << "The first number was not valid. Please enter only numbers: ";
    }
	std::cout<<"Do you want to find the root or a power of the first number?\n";
	std::cout<<"Enter [y] for yes or [n] for no\n";
	char check;
	while(std::cin>>check){
	if(check=='n'){
	break;
	}
	if(check=='y'){
	asmd='s';
	goto end;
	}
	std::cout<<"Please only type [y] or [n]\n";
	}


	std::cout<<"Add the second number: ";
	while (!(std::cin >> double2)) {
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "The second number was not valid. Please enter only numbers: ";
    }

	//Confirmation of inputs. (for debugging)
	std::cout << " \n";
	std::cout << "[" << double1 << "] [" << double2 << "]\n";
	std::cout << " \n";

	//User input for simple equation.
	std::cout << "[+][-][*][/][%]\n";
	//Added again a while-loop to make sure picking the right operations
	while(std::cin >> asmd){
	if(asmd=='+' || asmd=='-' || asmd=='*' || asmd=='/' || asmd=='%'){
	break;
	}
	else{
	std::cout<<"Please enter one of the following inputs only: [+][-][*][/][%]\n";
	std::cin.clear();
	}
	}
	end:
	quit:
	clear:
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
	case '%':
	    modulo();
		break;
	case 'c':
	    clear_history();
		break;
	case 's':
	    squareroot_or_powerof();
		break;
	}
	}
	return 0;
}

#include <iostream>
#include "variables.hpp"
#include <fstream>
#include <cmath>

//const char* math = "history.mdta";
//std::ofstream mathdata(math, std::ios::app);
//Handles addition.
void adding() {
	const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
	//Math Operation.
	std::cout << double1 + double2 << "\n";

	//Generates text file to store last known equation.
	mathdata << "--------------------------------------------------------\n";
	mathdata << "User: "<< name<<"\n";
	mathdata << "[" << double1 << "]" << " + " << "[" << double2 << "]\n";
	mathdata << " = " << double1 + double2 << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
}

//Handles subtraction.
void subtracting() {
	const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
	//Math Operation.
	std::cout << double1 - double2 << "\n";

	//Generates text file to store last known equation.
	//mathdata.open("history.mdta");
	mathdata << "--------------------------------------------------------\n";
	mathdata << "User: "<< name<<"\n";
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
	//mathdata.open("history.mdta");
	const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
	mathdata << "--------------------------------------------------------\n";
	mathdata << "User: "<< name<<"\n";
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
	//mathdata.open("history.mdta");
	const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
	mathdata << "--------------------------------------------------------\n";
	mathdata << "User: "<< name<<"\n";
	mathdata << "[" << double1 << "]" << " / " << "[" << double2 << "]\n";
	mathdata << " = " << double1 / double2 << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
}

void modulo() {
	//Modulo operation
	std::cout<< fmod(double1,double2)<<"\n";

	//Generates text file to store last known equation.
	//mathdata.open("history.mdta");
	const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
	mathdata << "--------------------------------------------------------\n";
	mathdata << "User: "<< name<<"\n";
	mathdata << "[" << double1 << "]" << " % " << "[" << double2 << "]\n";
	mathdata << " = " << fmod(double1,double2) << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
}

//Handles square root and power of functionality thanks to Saif Darwish.
void squareroot_or_powerof() {
	std::cout<<"If you want the square root then type [r] or if you want to the power then type [^]"<<std::endl;
	char chosenOp;
	while(std::cin>>chosenOp){
	if(chosenOp == '^' || chosenOp == 'r'){
	break;
	}
	else{
	std::cout<<"Please try again. You can only choose [r] or [^]"<<std::endl;
	std::cin.clear();
	}
	}
	if(chosenOp=='^'){
	int squareNumber;
	std::cout<<"Add a power number: "<<std::endl;
	std::cin>>squareNumber;
	std::cout<<double1<<"^"<<squareNumber<<" = "<<pow(double1,squareNumber)<<std::endl;
		
		
	//Generates text file to store last known equation.
        const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
	mathdata << "--------------------------------------------------------\n";
	mathdata << "User: "<< name<<"\n";
	mathdata << "[" << double1 <<"^"<<squareNumber<< "]\n";
	mathdata << " = " << pow(double1,squareNumber) << "\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
		    
	}
	if(chosenOp=='r'){
	std::cout<<"The sqaure root of "<<double1<<" is "<<sqrt(double1)<<" ."<<std::endl;
		
	//Generates text file to store last known equation.
	const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
	mathdata << "--------------------------------------------------------\n";
	mathdata << "User: "<< name<<"\n";
	mathdata << "The sqaure root of ["<<double1<<"] is ["<<sqrt(double1)<< "]\n";
	mathdata << "--------------------------------------------------------\n";
	mathdata.close();
	}


}


void clear_history(){
	const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::trunc);
	mathdata.close();
}

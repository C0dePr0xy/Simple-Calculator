#include <iostream>
#include "variables.hpp"
#include <fstream>
#include <cmath>

void adding();
void subtracting();
void multiplying();
void dividing();
void modulo();
void squareroot_or_powerof();
void clear_history();

void adding() {
    const char* math = "history.mdta";
    std::ofstream mathdata(math, std::ios::app);

    std::cout << double1 + double2 << "\n";

    mathdata << "--------------------------------------------------------\n";
    mathdata << "User: " << name << "\n";
    mathdata << "[" << double1 << "]" << " + " << "[" << double2 << "]\n";
    mathdata << " = " << double1 + double2 << "\n";
    mathdata << "--------------------------------------------------------\n";
    mathdata.close();
}

void subtracting() {
    const char* math = "history.mdta";
    std::ofstream mathdata(math, std::ios::app);

    std::cout << double1 - double2 << "\n";

    mathdata << "--------------------------------------------------------\n";
    mathdata << "User: " << name << "\n";
    mathdata << "[" << double1 << "]" << " - " << "[" << double2 << "]\n";
    mathdata << " = " << double1 - double2 << "\n";
    mathdata << "--------------------------------------------------------\n";
    mathdata.close();
}

void multiplying() {
    const char* math = "history.mdta";
    std::ofstream mathdata(math, std::ios::app);

    std::cout << double1 * double2 << "\n";

    mathdata << "--------------------------------------------------------\n";
    mathdata << "User: " << name << "\n";
    mathdata << "[" << double1 << "]" << " * " << "[" << double2 << "]\n";
    mathdata << " = " << double1 * double2 << "\n";
    mathdata << "--------------------------------------------------------\n";
    mathdata.close();
}

void dividing() {
    const char* math = "history.mdta";
    std::ofstream mathdata(math, std::ios::app);

    std::cout << double1 / double2 << "\n";

    mathdata << "--------------------------------------------------------\n";
    mathdata << "User: " << name << "\n";
    mathdata << "[" << double1 << "]" << " / " << "[" << double2 << "]\n";
    mathdata << " = " << double1 / double2 << "\n";
    mathdata << "--------------------------------------------------------\n";
    mathdata.close();
}

void modulo() {
    const char* math = "history.mdta";
    std::ofstream mathdata(math, std::ios::app);

    std::cout << fmod(double1, double2) << "\n";

    mathdata << "--------------------------------------------------------\n";
    mathdata << "User: " << name << "\n";
    mathdata << "[" << double1 << "]" << " % " << "[" << double2 << "]\n";
    mathdata << " = " << fmod(double1, double2) << "\n";
    mathdata << "--------------------------------------------------------\n";
    mathdata.close();
}

void squareroot_or_powerof() {
    std::cout << "If you want the square root then type [r] or if you want to the power then type [^]\n";

    char chosenOp;
    while (std::cin >> chosenOp) {
        if (chosenOp == '^' || chosenOp == 'r') {
            break;
        }
        else {
            std::cout << "Please try again. You can only choose [r] or [^]\n";
            std::cin.clear();
        }
    }

    if (chosenOp == '^') {
        int squareNumber;
        std::cout << "Add a power number: ";
        std::cin >> squareNumber;
        std::cout << double1 << "^" << squareNumber << " = " << pow(double1, squareNumber) << "\n";

        const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
        mathdata << "--------------------------------------------------------\n";
        mathdata << "User: " << name << "\n";
        mathdata << "[" << double1 << "^" << squareNumber << "]\n";
        mathdata << " = " << pow(double1, squareNumber) << "\n";
        mathdata << "--------------------------------------------------------\n";
        mathdata.close();
    }

    if (chosenOp == 'r') {
        std::cout << "The square root of " << double1 << " is " << sqrt(double1) << " .\n";

        const char* math = "history.mdta";
        std::ofstream mathdata(math, std::ios::app);
        mathdata << "--------------------------------------------------------\n";
        mathdata << "User: " << name << "\n";
        mathdata << "The square root of [" << double1 << "] is [" << sqrt(double1) << "]\n";
        mathdata << "--------------------------------------------------------\n";
        mathdata.close();
    }
}

void clear_history() {
    const char* math = "history.mdta";
    std::ofstream mathdata(math, std::ios::trunc);
    mathdata.close();
}

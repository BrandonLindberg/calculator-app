#include <iostream>
#include "Calculator.h"

double checkNumber() {
    double value;

    while (true) {
        std::cin >> value;

        if (std::cin.fail()) {
            std::cout << "Please enter a valid number: ";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        } else {
            return value;
        }
    }
}

char checkOperator() {
    char value;

    while (true) {
        std::cin >> value;

        if (value != '+' && value != '-' && value != '*' && value != '/') {
            std::cout << "Please enter a valid operator: ";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        } else {
            return value;
        }
    }
}

void Calculate() {
    Calculator calculator;

    std::cout << "Enter first number: ";
    double a = checkNumber();

    std::cout << "Enter operation: ";
    char op = checkOperator();

    std::cout << "Enter second number: ";
    double b = checkNumber();

    double result = calculator.calculate(a, op, b);

    std::cout << "Result: " << result << "\n" << std::endl;
}

int main() {

    int userSelection = 0;

    while (userSelection != 2) {
        std::cout << "1. Calculate\n2. Exit\nSelection: ";
        std::cin >> userSelection;

        switch (userSelection) {
            case 1:
                Calculate();
                break;
            case 2:
                break;
            default:
                std::cout << "Invalid input." << std::endl;
                break;
        }
    }
}
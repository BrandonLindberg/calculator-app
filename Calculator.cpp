//
// Created by Brandon Lindberg on 3/6/26.
//

#include "Calculator.h"
#include "iostream"

Calculator::Calculator() {
    operations['+'] = [](double a, double b){ return a + b; };
    operations['-'] = [](double a, double b){ return a - b; };
    operations['*'] = [](double a, double b){ return a * b; };
    operations['/'] = [](double a, double b){ return a / b; };
}

double Calculator::calculate(double a, char op, double b) {
    if (operations.count(op)) {
        return operations[op](a, b);
    }
    std::cout << ("Invalid operator\n");
}
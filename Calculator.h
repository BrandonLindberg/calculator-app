//
// Created by Brandon Lindberg on 3/6/26.
//
#ifndef CALCULATOR_APP_CALCULATOR_H
#define CALCULATOR_APP_CALCULATOR_H

#include <map>
#include <functional>

class Calculator {
private:
    std::map<char, std::function<double(double,double)>> operations;

public:
    Calculator();
    double calculate(double a, char op, double b);
};


#endif //CALCULATOR_APP_CALCULATOR_H
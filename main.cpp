/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Austin Mathew
 */

#include "std_lib_facilities.h"

int main() {
    cout << "Simple Calculator\n";
    cout << "Enter an expression for calculation in the following format\n";
    cout << "Operator Number Number\n\n" << "This will do the calculation: Number Operator Number\n\n";
    cout << "Possible Operators: +, -, *, /\n" << "Example Numbers: 3.14, 1, 0.56, etc.\n\n";
    cout << "Expression for Calculation: ";
    //specifies input instructions to user and the expected function of the program
    string operation;
    cin >> operation;
    double num1, num2, out;
    cin >> num1 >> num2;
    //stores input from user
    //makes an int for storing output

    if (operation=="+"){
        out = num1 + num2;
    }
    else if (operation=="-"){
        out = num1 - num2;
    }
    else if (operation=="*"){
        out = num1 * num2;
    }
    else if (operation=="/"){
        out = num1 / num2;
    }
    else{
        cout<< "Incorrect Operator";
        return 0;
    }
    //checks for each operator case, performs correct operation
    //if not a possible operation, error message is printed and program ends

    cout << num1 << operation << num2 << "=" << out << endl;
    //prints out operation in a mathematical equation for understanding
    cout << "Final Answer: " << out;
    // prints final answer

    return 0;
}

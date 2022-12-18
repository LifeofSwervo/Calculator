#include <iostream>

using namespace std;

int main () {
    double num1, num2; //Int 2 variables (double floating).
    char operation; //Int char variable for the operation performed. 



    cout << "Enter the first number: "; //First Number
    cin >> num1;

    cout << "Enter the second number: "; //Second Number
    cin >> num2;

    cout << "Enter the operation (+,-,*,/): "; //Operation
    cin >> operation;

    //Operation if statement

    if (operation == '+') {  //Addition
        cout << num1 + num2 << endl;
    } else if (operation == '-') { //Subtraction
        cout << num1 - num2 << endl;
    } else if (operation == '*') { //Multiplication
        cout << num1 * num2 << endl;
    } else if (operation == '/') { //Division
        cout << num1 / num2 << endl;
    } else {
        cout << "Invalid Operator, Please try again." << endl; //Fail State
    }


    return 0;
}
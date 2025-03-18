#include <bits/stdc++.h>
using namespace std;

int main()
{
    float num1;
    float num2;
    char arithmeticOP;
    cout << "-------------------------------------------------\n \t \t !DISCLAIMER! \n 1.This Is A Simple Calculator(You Can Use +,-,*,/). \n 2.If You Want To Quit PRESS '0'. \n ------------------------------------------------- \n";
    while (true)
    {
        cout << "Enter two numbers: \n";
        cout << "1.";
        cin >> num1;
        cout << "2.";
        cin >> num2;
        cout << "Enter the operator :";
        cin >> arithmeticOP;
        switch (arithmeticOP)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        case '0':
            cout << "Thank you for using MyCalc :) ";
            exit(EXIT_SUCCESS);
        }
    }
    return 0;
}
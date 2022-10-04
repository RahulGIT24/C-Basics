#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    //! ARITHMETIC OPERATORS

    //* Add Operator
    cout << a + b << endl;
    //* Subtract Operator
    cout << a - b << endl;
    //* Multiplication operator
    cout << a * b << endl;
    //* Division operator
    cout << (float)a / b << endl; //! Typecasting to float
    //* Modulus Operator
    cout << a % b << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Rahul";
    cout << "The name is " << name << endl;

    //* String Functions
    cout << "The length of name is " << name.length() << endl;
    cout << "Name from 0 to 3 character is " << name.substr(0, 3) << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age > 150 || age < 1) //* || or opeator
    {
        cout << "Shit BRO!";
    }
    else if (age >= 18)
    {
        cout << "You can vote!";
    }
    else
    {
        cout << "You can not vote!";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // int i;
    //! While loop
    // while (i < 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    //! For loop
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i << endl;
    // }

    //! Do while loop
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i < 10);

    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    for (int i = 1; i < 11; i++)
    {
        cout << num * i << endl;
    }

    return 0;
}
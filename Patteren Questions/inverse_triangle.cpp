#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    //* First Approach
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= (n - i + 1); j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //* Second Approach
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
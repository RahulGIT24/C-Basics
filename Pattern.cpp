#include <iostream>
using namespace std;
int main()
{
    // int rows, columns;
    // cout << "Enter number of rows: ";
    // cin >> rows;
    // cout << "Enter number of columns: ";
    // cin >> columns;

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= columns; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= columns; j++)
    //     {
    //         if (i == 1 || j == 1 || i == rows || columns == j)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    int n;
    cout << "Enter a number: ";
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= (n - i); j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= ((2 * i) - 1); j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= (n-i+1); j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= columns; j++)
    //     {
    //         if (((i+j) % 2) == 0)
    //         {
    //             cout << "1";
    //         }
    //         else
    //         {
    //             cout << "2";
    //         }
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = (i - 1); j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
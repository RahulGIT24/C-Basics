#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int i, j;

    for (int i = n; i >= 1; i--)
    {
        for (j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i == n || j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
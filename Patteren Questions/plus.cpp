#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            //* Here i is row so when row is half of size it means row is also half, half is in the middle so it prints * in the mid row
            if (i == size / 2)
            {
                cout << "*";
            }
            //* Here j is column so when column is half of size it means column is also half, half is in the middle so it prints * in the mid column
            else if (j == size / 2)
            {
                cout << "*";
            }
            //* Rest will be spaces
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
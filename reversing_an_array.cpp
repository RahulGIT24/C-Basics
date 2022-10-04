#include <iostream>
using namespace std;
void reverseArr(int array[], int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}
int main()
{
    int array[5] = {1, 4, 5, 6, 7};
    reverseArr(array, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i];
    }

    return 0;
}
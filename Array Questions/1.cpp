//  Given an integer array arr, return an array ans such that ans[i] is equal to the product of all the elements of arr except arr[i]

#include <iostream>
using namespace std;
void product(int arr[], int n)
{
    // Base Case
    if (n == 0)
    {
        cout << 0;
    }

    // Construct two temperory arrays
    int left[n];
    int right[n];

    // Contruct product array
    int prod[n];

    // Left and right 1st element will be 1
    left[0] = 1;
    right[n - 1] = 1;

    // Adding values in left array
    for (int i = 1; i < n; i++)
    {
        left[i] = arr[i - 1] * left[i - 1];
    }
    // Adding values in right array
    for (int j = (n - 2); j >= 0; j--)
    {
        right[j] = arr[j + 1] * right[j + 1];
    }
    // Adding values in final array
    for (int i = 0; i < n; i++)
    {
        prod[i] = left[i] * right[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << prod[i] << " ";
    }
}
int main()
{
    int size = 4;
    int arr[size] = {1, 3, 5, 7};
    product(arr, size);
    return 0;
}
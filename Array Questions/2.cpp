// Check if two subarrays with equal sum, Check that prefix sum of a part of the array is equal to the suffix sum of the rest of the array

#include <iostream>
using namespace std;
bool checkSum(int arr[], int n)
{
    int sum = 0, prefix_sum = 0, suffix_sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        suffix_sum = sum - prefix_sum;
        if (suffix_sum == prefix_sum)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int size = 5;
    int arr[size] = {12,3,5,5,9};
    cout<<checkSum(arr, size);
    return 0;
}
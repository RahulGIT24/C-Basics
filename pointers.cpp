#include <iostream>
using namespace std;
int main()
{
    int a = 90;
    int *ptr = &a;
    cout << ptr << endl; //* Gives address
    cout << *ptr;        //* Gives value
    return 0;
}
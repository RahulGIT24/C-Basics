#include <iostream>
using namespace std;
int sumFunc(int a, int b)
{
    return a + b;
}

void sum(int a, int b)
{
    cout << a + b << endl;
}

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        int result = num * factorial(num - 1);
        return result;
    }
}
int main()
{
    int a, b, c;
    a = 90;
    b = 45;
    c = sumFunc(a, b);
    cout << "THE SUM OF TWO NUMBERS IS: " << c << endl;
    sum(a, b);
    cout << "Factorial is " << factorial(5);
    return 0;
}
#include <iostream>
using namespace std;

//* Suppose n=4
//* Expected result 👇

//!     *
//!    ***
//!   *****
//!  *******

//* loop i will start from 1 and iterate through n that is 4
//* First I will print spaces and then stars
//*  In the first row I have to print only one star and the rest will be spaces
//* I will use two loops the first will start from 1 till (n-i)
//* The second will start from 1 to (2*i-1)
//* When i = 1, 1st loop will print 3 spaces and the second loop will be 1 so one * star and three spaces will be printed and the loop continues


int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int i,j;
    for (i=1; i <= n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
return 0;
}
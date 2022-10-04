#include <iostream>
using namespace std;
typedef struct employee
{
    int code;
    float salary;
    string name;
} emp;

typedef struct sumVec
{
    int x;
    int y;
} sum;
sum sumVector(sum v1, sum v2)
{
    sum result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    //! Initializing Structures
    // emp e1, e2;
    // e1.code = 441;
    // e1.salary = 44441.90;
    // e1.name = "Rahul Gupta";
    // cout << "Salary of 1st employee " << e1.salary << endl;
    // cout << "Code of 1st employee " << e1.code << endl;
    // cout << "Name of 1st employee " << e1.name << endl;

    //! Another Way
    // emp rahul = {123, 874545.9, "Rahul Gupta"};
    // cout << "Salary of Rahul " << rahul.salary << endl;
    // cout << "Code of Rahul " << rahul.code << endl;
    // cout << "Full name of Rahul " << rahul.name << endl;

    //! Initializing through array
    // emp facebook[100];
    // facebook[0].code = 900;
    // facebook[0].salary = 1900.10;
    // facebook[0].name = "MOHAN";
    // cout << "Salary of 1st employee " << facebook[0].salary << endl;
    // cout << "Code of 1st employee " << facebook[0].code << endl;
    // cout << "Name of 1st employee " << facebook[0].name << endl;

    //! Through pointers
    // emp e1, e2;
    // emp *ptr;
    // ptr = &e1;
    // ptr->code = 120; //* This is an arrow operator (->)
    // ptr->salary = 120000.6;
    // ptr->name = "Rahul";
    // cout << "Salary of 1st employee " << e1.salary << endl;
    // cout << "Code of 1st employee " << e1.code << endl;
    // cout << "Name of 1st employee " << e1.name << endl;

    //! Passing through functions
    sum num, v1, v2;
    v1.x = 90;
    v2.x = 900;
    v1.y = 9;
    v2.y = 80;
    num = sumVector(v1, v2),
    cout << "Sum of X dim is " << num.x << endl;
    cout << "Sum of Y dim is " << num.y << endl;
    return 0;
}
#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int salary, int sp)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our 1st employee is " << this->name << " and his salary is " << this->salary << endl;
    }
    void getPass()
    {
        cout << "The secret password of Employee is " << this->secretPassword;
    }

private:
    int secretPassword;
};

//* inhertance
class Programmer : public Employee
{
public:
    int errors;
};

int main()
{

    Employee e1("Rahul Gupta", 444, 12121);
    // e1.name = "Rahul";
    // e1.salary = 100;
    e1.printDetails();
    e1.getPass();
    // cout<<e1.secretPassword; //* Private can't be accesed
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Base class.
class Employee
{
    int eid;
    float salary;

    public:
        Employee(){}
        Employee(int id, int sal) {
            eid = id;
            salary = sal;
        }

        void getData(){
            cout << "Employee id is " << eid << " & Salary is " << salary << endl;
        }
};

// Derived class syntax.
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-name}} 
{
    member data & functions.
}

- Default visibility mode is private.
- Private visibility mode means --> public member of the base class becomes private members of the derived class.
- Public visibility mode means  --> public member of the base class becomes public members of the derived class.
- Private members of the base class will never be inherited to the derived class.
*/

// Creating a programmer class derived from Employee class.
class Programmer : Employee
{

}



int main()
{
    Employee rewati(1, 100), raman(2, 540);
    rewati.getData();
    raman.getData();
    return 0;
}
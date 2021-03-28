#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Base class.
class Employee
{
    public:
        int eid;
        float salary;
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
class Programmer : public Employee
{
    string skill;
    public:
        Programmer() {}
        Programmer(int i, int s) {
            eid = i;
            salary = s;
        }
        void setSkill(string skl) {
            skill = skl;
        }

        void display() {
            getData();
            cout << "Skill is " << skill << endl;
        }
};

// Multilevel inheritance 
// Base class of Manager if Programmer and Base class of Programmer is Employee.
// Inheritance path is : Employee --> Programmer --> Manager.
class Manager : public Programmer
{
    int mngrId;
    public:
        Manager() {}
        Manager(int id, int sal) {
            eid = id;
            salary = sal;
        }
        void setMngrId(int mid) {mngrId = mid;}
        void displayManagerId(){
            cout << mngrId << endl;
        }
};

int main()
{
    Employee rewati(1, 100);
    rewati.getData();

    Programmer rrr(9,111);
    rrr.setSkill("C++");
    rrr.display();

    Manager rraman(9, 912);
    rraman.setSkill("Python");
    rraman.setMngrId(101);
    rraman.display();
    cout << "Manager Id is ";
    rraman.displayManagerId();
    cout << endl;
    return 0;
}
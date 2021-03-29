#include<bits/stdc++.h>
using namespace std;

/*
    class B : public A {
        // Order of execution of constructor -> first A() then B()
    };

    class A : public B, public C {
        // Order of execution of constructor -> first B(), C(), then A()
    };

    class A : public B, virtual public C {
        // Order of ececution of constructor -> first C(), B(),then A()
        // B/c virtual class take precedence over all other non-virtual classes.
    };

*/

class Base1{
    int data1;
    public:
        Base1(){
            cout << "Base 1 constructor with no argument called.\n";
        }
        Base1(int a) {
            data1 = a;
            cout << "Base 1 constructor called.\n";
        }

        void printDataBase1() {
            cout << "The value of data1 is " << data1 << endl; 
        }
};

class Base2{
    int data2;
    public:
        Base2(int b) {
            data2 = b;
            cout << "Base 2 constructor called.\n";
        }

        void printDataBase2() {
            cout << "The value of data2 is " << data2 << endl; 
        }
};

class Derived : public Base1 , virtual public Base2{
    int derived1;
    public:
        // Derived(int a, int b, int c) : Base1(a), Base2(2) {
        Derived(int a, int b, int c) : Base2(2) {
            derived1 = c;
            cout << "Derived  class constructor called.\n";
        }

        void printDataDerived(){
            cout << "The value of derived1 is " << derived1 <<  endl;
        }
};

int main() {
    Derived raman(1, 2, 3);
    raman.printDataBase1();
    raman.printDataBase2();
    raman.printDataDerived();
    return 0;
}
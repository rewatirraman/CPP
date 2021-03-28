#include<bits/stdc++.h>
using namespace std;

class Base1
{
    int base1int;
    public:
        void setBase1Int(int a) {
            base1int = a;
        }

        void displayFromBase1() {
            cout << "Printing from Base1 : " << base1int << endl;
        }
};

class Base2
{
    int base2int;
    public:
        void setBase2Int(int b) {
            base2int = b;
        }

        void displayFromBase2() {
            cout << "Printing from Base2 : " << base2int << endl;
        }
};

class Derived : public Base1, public Base2
{
    int derivedint;
    public:
        void setDerivedInt(int c) {
            derivedint = c;
        }

        void displayFromDerived() {
            cout << "Printing from Derived : " << derivedint << endl;
        }
};

int main() {
    Derived raman;
    raman.setBase1Int(1);
    raman.setBase2Int(2);
    raman.setDerivedInt(3);

    raman.displayFromBase1();
    raman.displayFromBase2();
    raman.displayFromDerived();
    return 0;
}
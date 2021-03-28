#include<bits/stdc++.h>
using namespace std;

class Base1
{
    public:
        void greet() {
            cout << "Hello, How are you .?" << endl;
        }
};

class Base2
{
    public:
        void greet() {
            cout << "Hi, Kaise ho.?" << endl;
        }
};

class Derived : public Base1, public Base2
{
    public:
        // since we have same function name in both the classes which we are inherting,
        // hence, we need to specify which one to use in the derived class.
        void greet() {Base1 :: greet();}
};

int main(){
    Derived rewati;
    rewati.greet();
    return 0;
}
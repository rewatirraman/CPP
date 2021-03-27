/*
    Program : Adding two objects.
*/
#include <bits/stdc++.h>
using namespace std;

class ComplexNumber
{
    int real, img;
    public:
        void display();
        void set(int r, int i);
};

void ComplexNumber :: display() {
    cout <<  "The complex number is " << real << " + " << img << "i" << endl;
}

void ComplexNumber :: set(int a, int b) {
    real = a;
    img = b;
    cout << "Calling display() method from set() method of the ComplexNumber class." << endl;
    display();  // Calling the member function of the same class from other member function of the same class, this is called Nesting of member function.
}

int main() {
    ComplexNumber x;
    x.set(5, 7);
    cout << "Calling display() method from outside the class" << endl;
    x.display();    // This is calling the public member function from out side the class.
    return 0;
}
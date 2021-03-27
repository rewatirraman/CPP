#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;
    public:

        // This is default constructor.
        // It should be declared in public section of the class.
        Complex(void) {
            real = 10;
            img = 12;
        }

        // Parameterized constructor.
        Complex(int a, int b) {
            real = a;
            img = b;
        }        

        // Destructor.
        ~Complex() {
            cout << "Destructor is called" << endl;
        }

        void getData() {
            cout << "The number is " << real << " + " << img << "i" << endl;
        }
};

int main() {
    Complex c1, c2(5, 7);
    c1.getData();
    c2.getData();
    
    cout << "Entering into the block" << endl;
    {
        Complex c3(10,96);
        c3.getData();
    }
    cout << "Exiting from the block" << endl;

    return 0; 
}
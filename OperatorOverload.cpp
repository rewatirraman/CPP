#include<bits/stdc++.h>
using namespace std;


class Complex
{
    int real, img;
    public:
        Complex() {}
        Complex(int real, int img) {
            this->real = real;
            this->img  = img;
        }
        Complex operator + (Complex &obj) {
            Complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }
        void display() {
            cout << "Complex number is " << real << " + " << img << "i" << endl;
        }
};

int main()
{
    Complex c1(5, 6), c2(4, 2);
    c1.display();
    c2.display();
    
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
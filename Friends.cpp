#include <bits/stdc++.h>
using namespace std;

// Forward declaration.
class Complex;

class Calculator
{
    public:
        int add (int a, int b) {
            return a+b;
        }
        int addRealComplex(Complex, Complex);
        int addImgComplex(Complex, Complex);
};

class Complex 
{
    int real, img;

    public:
        // sumComplex is in the scope of Complex class but it is not a member function of the Complex class.
        // sumComplex can not be accessed using the object like --> o1.sumComplex(o2, o3)
        // Friend function can be declared inside public or private section of the class.
        friend Complex sumComplex(Complex, Complex);

        // Giving access to each of the member function of the Calculator class individually.
        // friend int Calculator::addRealComplex(Complex, Complex);
        // friend int Calculator::addImgComplex(Complex, Complex);

        // Giving access to all the memeber function of class Calculator function.
        friend class Calculator;

        void setComplex(int r, int i) {
            real = r;
            img = i;
        }

        void printComplex() {
            cout << "Number is " << real << " + " << img << "i" << endl;
        }
};

int Calculator::addRealComplex(Complex o1, Complex o2) {
    return (o1.real + o2.real);
}

int Calculator::addImgComplex(Complex o1, Complex o2) {
    return (o1.img + o2.img);
}

// This is a outsider function with access to the private data member of Complex class.
Complex sumComplex(Complex o1, Complex o2) {
    Complex temp;
    temp.setComplex((o1.real + o2.real), (o1.img + o2.img));
    return temp;
}


int main() 
{
    Complex c1, c2, sum;

    c1.setComplex(4, 6);
    c1.printComplex();

    c2.setComplex(8, 9);
    c2.printComplex();

    // Friend function.
    // sum = sumComplex(c1, c2);
    // sum.printComplex();

    
    Calculator calc;
    cout << "Sum of 4 & 5 using add function of Calculator class is " << calc.add(4, 5) << endl;
    cout << "Sum of real part of c1 & c2 is  " << calc.addRealComplex(c1, c2) << endl;
    cout << "Sum of imaginary part of c1 & c2 is  " << calc.addImgComplex(c1, c2) << endl;

    return 0;
}
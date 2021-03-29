#include<bits/stdc++.h>
using namespace std;

class BaseClass
{
    public:
        int varBase;
        BaseClass(){cout << "BaseClass constructor called\n";}
        // void display() {cout << "Hello, how are you ..?\n";} // This is the default behaviour.
         virtual void display() {cout << "Hello, how are you ..?\n";}    // This says if some pointer is of my type but pointing to derived class
                                                                        // Then use display() from the derived class only not from here.
        //virtual void display()=0;   // Pure virtual fucntions.
};

class DerivedClass : public BaseClass
{
    public:
        int varDerived;
        DerivedClass() {cout << "DerivedClass constructor called\n";}
        void display() {cout << "Hi, Kaise ho ..?\n";}
};

int main() 
{
    BaseClass* base_class_ptr;
    BaseClass base_class_obj;   // This will throw an error if there is a pure virtual fucntions in the base class.
    DerivedClass derived_class_obj;
    base_class_ptr = &derived_class_obj;

    base_class_ptr->varBase = 29;
    // base_class_ptr->varDerived = 39; // This will throw an error saying `no member found`
    base_class_ptr->display();  // This will bind to display() of base class not the derived class, this is called late binding.
                                // If we want this to bind to the derived class display()
                                // we need to use virtual functions in the base class.

    // DerivedClass* derived_class_ptr;
    // derived_class_ptr = &derived_class_obj;
    // derived_class_ptr->display();   // This will bind to display() of derived class.
    return 0;
}
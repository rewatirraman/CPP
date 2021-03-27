/*
==========================OOPS==========================

OOP aims to implement real-world entities like Inheritance, Hiding, Ploymorphism etc in programming.

Abstraction     --> Hiding the lower level working and only showing what is needed to the outer world.

Encapsulation   --> Capsul K andar dal do data and methods ko.
                    Wrapping Data and fucntion into single unit.

Inheritance     --> Properties of one Class can be inherited into others.

Class           --> Template to create Objects, it just have the prototype of the variables and functions.
                    Functions, Variables etc.. There isn't any memory allocated here.

Object          --> Basic run time entities using the class, each object will have there own variables & methods.
                    Memory is allocated here.

Ploymorphism    --> Ability to take more than one forms, Eg.= Function overloading, Operator overloading etc....

** By Default class members are private.

----------------
Benefits of OOPS
----------------
    * Code reusability.
    * Principle of data hiding help build secure systems.
    * Multiple objects can exits without any interfaces.
    * Software complexity can be easily managed.

-------------------
Structure Vs. Class
-------------------
    - We can not have function under structure.
    - Data hiding is not possible in structure.
    - Classes are of reference type while Structures are of values type.
        All the reference types are allocated on heap memory.
        All the Values types are allocated on stack memory.
    - Classes can contain Constuctor or Destructor.
        Structures does not contain parameter less Constructor or Destructor, but can contain Parameterised Constructor & Destructor.
    - Class can be inherited from other class.
        Structures are not allowed to inherit from another stucture.
    - Function member of a Class can be virtual or abstract.
        Function member of a Structure cannot be virtual or abstract.


-------------------------
Function within the Class
-------------------------
    We can create a function of a class in 2 ways.
        1. Just declare the fucntion prototype within the Class and Define the function outside of the class.
            Eg.
                void setData(int priA, int pubB);               <-- Declaration within the Class.
                void Employess::setData(int priA, int pubB);    <-- Definition of the funtion outside the class.

        2. Define the function within the class itself.
            Eg.
                void setData(int priA, int pubB) { // Do the coding. }

--------------------------
Nesting of Member function
--------------------------
    A member function of the class can call another member function of the same class directly without using the dot operator.

    Eg. --> NestingOfMemberFunction.cpp

-------------------------
Objects memory allocation
-------------------------
    Memory allocation happens smartly by the compiler.
    For those variables or member functions which are common to all the objectes
        --> Memory is allocated only once.
    For those variables or member functions which are different for different objects 
        --> Memory is allocated separatly.

-------------------
Static Data Members
-------------------
    - Static data members are shared by all the objects.
    - Static data members are always intialized to 0 when the first class object is created.
    - Static variables are written outside of the class.
        Eg. staticDataMembers.cpp

    - Scope of static variable is within the class only.
    - Lifetime of this static variable is for the whole lifetime of the program.

    **Static function**
        - Static function can only access static variable.
        
----------------
Array of objects
----------------
    Similar to array of int data type we can create array of object of some class as well.
    Eg. 
        Employee arr[100];

-------
Friends 
-------
    - A friend can be a function, funcion template, or member function , or a class, or a class template.
    - Eg. 
        Friends.cpp
   
    **Friend functions**
        - Friend function of a class is defined outside the class scope but it has right to access all private and protected data members.
        - *Even though the prototype of friend function appear inside the class definition, but friends are not member function.*
        - Friend function can be declared inside public or private section of the class.

    **Friend Class**
        - We can make each of the member fucntion of another class individually.
        - We can also make the whole class itself as a friend.

--------------------------
Constructors & Destructors
--------------------------
    Eg.
        Constructor.cpp

    * A Constructor is a special member function of a class with the name of the class itself.
    * Constructor initializes objects of a class.
    * In C++ Constructor is automatically called when object of that class is created.
    * Constructor should be declared in the public section of the class.
    * Do not have return type.
    * We can not refer to the address of the constructor.
    
    
    **Parameterized constructor**
        - it takes some arguments.
    
    **Constructor overloading**
        - A class can have multiple constructor.

    **Copy Constructor**
        - A Copy constructor is the member function that initializes an object using another object of the same class.
        - Prototype :
                    className (const className &old_obj);
        - When there is not userdefined copy constructor found, compiler supplies its own copy constructor. 

        - When is copy constructor called ..?
            * When and object of a class is passed by value as an argument.
                Eg. className objNew(objOld);
            * When an object is constructed based on another object of the same class.
                Eg. className objNew = objOld;
        - When is copy constructor not called ..?
            Eg.
                className newObj;
                newObj = oldObj;

        - When a user defined copy constructor is required ..?
            * Default copy contructor created by compiler does a shallow copy.
            * User defined copy constructor is needed if an object contains pointers or any runtime allocation of the resources like filehandle, network connection etc..
            * Deep copy is possible only with user defined copy constructor.
            * 
        
        - Can we make copy constructor private ..?
            * YES, a copy constructor can be made private.
            * When a copy constructor is made private in a class, object of that class become non-copyable.
            * This is useful when our class has pointers or dynamically allocated resources,
                In such situations we can write our own copy constructor and make it private so, that users get compile time errors rather surprises ate runtime.
    
    **Destructors**
        - It nevers takes any argument nor it returns any value.
        - prototype:
            ~className(){}

-----------
Inheritance
-----------
    - Reusing already tested & debugged class., hence saving lot of time and efforts.
    - We can add extra features also.
    - Existing class is called Base class, New class which is inherited is called Derived class.
    
    - ** Types of Inheritance ** 
        1. Single Inheritance.
            Eg.
                Employee  --> Programmer        
        
        2. Multiple Inheritance. -> A derived class from more than one Base class.
            Eg.
                Employee    --
                              |--> Programmer
                Assistant   --

        3. Hierarchical Inheritance. -> Several Derived class from single Base class.
            Eg.
                              |--> Manager  
                Employee    --|
                              |--> Programmer

        4. MultiLevel Inheritance.
            Eg.
                Animal  --> Mammal  --> Cow
        
        5. Hybrid Inheritance.
                       |--> B --
                A    --|        |--> D
                       |--> C --   

    - Eg. Inheritance.cpp

    ** Derived class syntax. **

        class {{derived-class-name}} : {{visibility-mode}} {{base-name}} 
        {
            member data & functions.
        }

        - Default visibility mode is private.
        - Private visibility mode means --> public member of the base class becomes private members of the derived class.
        - Public visibility mode means  --> public member of the base class becomes public members of the derived class.
        - Private members of the base class will never be inherited to the derived class.

    






*/


#include <bits/stdc++.h>
using namespace std;

class Employee
{
    private:
        int priA;
    public:
        int pubB;
        void setData(int priA, int pubB);
        void getData(){
            cout << "Value of priA=" << priA << endl; 
            cout << "Value of pubB=" << pubB << endl;
        }
};

void Employee::setData(int x, int y) {
    priA = x;
    pubB = y;
}

int main() {
    Employee raman;
    raman.setData(10, 90);
    raman.getData();
    return 0;
}

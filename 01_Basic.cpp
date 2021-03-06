/*
    -------------------
    Input Output in C++
    -------------------

        Sequence of of bytes corresponding to the input or output are known as Streams

        Input Stream :: For input
        Output Strams :: For output

        '<<' is known as Insertion operator, This is used with `cout`.
        '>>' is known as Extraction operator, This is used with `cin`.


    -----------------------------------------------
    Using Global variable instead of Local variable
    -----------------------------------------------

        [Q] If a variable with same name exit in Local as well as Global scope and we want to use Global variable.

        [Ans] We can do so with the help of Global scope operator `::VariableName`


    -------------------------
    Floating point and Double 
    -------------------------

        By Default decimael literals are considered as `double`data type.

        Ex. 34.4    --> double data type.
            34.4f   --> this is of floating data type.
            

    -------------------
    Reference Variables
    -------------------
       
        One man is called by muliple names.
            ex. Rohan --> Monty --> Rohu --> Dangerous coder.
        
        Similarly, In the program if we want to use same location by different name we use references.

            int variableA = 10;
            int & variableB = variableA;
            cout << "variableA=" << variableA << endl;
            cout << "variableB=" << variableB << endl;


            In the above example `variableB` is not the copy of `varibaleA` it is just the other name of `variableA`.

    -----------
    Typecasting
    -----------
        
        Type casting can be done in below ways.

            (int)variableName
            int(variableNAme)
    
    ---------
    Functions
    ---------

        Call by Value.
            int foo(int a, int b)       <-- foo(x, y)

        Call by Reference using pointer.
            int foo(int *a, int *b)     <-- foo(&x, &y)

        Call by Reference usin C++ reference variable.
            int foo(int &a, int &b)     <-- foo(x, y)

            
        *********Inline Function*********
            
            This is expanded inline when it is invoked by Compiler, which reduces the overhead of function calls.

            Eg.
                inline int foo(int a, int b) {
                    return a*b;
                }

            * Not recommended to use inline function in Recursion.
            * Not a good practise to use inline function when using static variable in the inline function.
            

            **  When we are trying to make any function as inline function it is not guranteed that it will be inline function.
                It is a request to the Compiler, It depends upon Compiler whether or not this function will be made inline fcuntion or not.
            
        
        *********Function Overloading*********
            Nam ek kam anek, multiple fucntion with the same name with different arguments.

            Eg.
                int sum(int a, int b) {return a+b;}
                int sum(int a, int b, int c) {return a+b+c;}

            **Working**

                Compiler first matches the prototype,
                    if success --> Call the exact matched function.
                    else       --> Compiler try to promote the data type.
                    
                    If this also fails then compiler will throw error.
    
    --------------------------
    `new` & `delete` Operators
    --------------------------
        - Dynamically allocated memory is allocated in Heap, whereas non-static & local variables get memory allocated on stack.
        - For normal variables like `int a`, `int arr[10]` ... memory is automatically allocated & deallocated.
        - For dynamically allocated memory it's programmer's responsibility to deallocate the memory if no longer needed.
            If programmer doesn't deallocate the memory then it causes `memory leak` (memory is not deallocated until the program terminates.)
        - `C` uses `malloc` & `calloc` functions to allocate the memory dynamically and `free` to deallocate the same.
        - `C++` supports these functions also has two more operator `new` & `delete` that perform the same task in a better and easier way.

        - Syntax :
            pointer-variable = new data-type

                int *p=NULL; p=new int;
                (or)
                int *p = new int;

            // We can also initialize the memory using new operator.
                int *p = new int(4);
                float *pf = new float(4.2);

                int *p = new int[10]    // Array

        - What is enough memory is not available in the Heap.
            It will throw an exception `std::bad_alloc` unless `nothrow` is used with new operator (in this case it will return NULL).
            Eg. int *p = new(nothrow) int;

            - It's a good practice to always check for the pointer variable after using new operator.
        
        * `delete` operator. *
            - Used to release the memory pointed by pointer variable.
            - Syntax : 
                        delete pointer-variable;
                        deleted[] pointer-variable; // for release block of memory (array).

                

*/

#include <bits/stdc++.h>
using namespace std;

int variableA = 100;
int main(){
    // -----------------------------------------------
    // Using Global variable instead of Local variable
    // -----------------------------------------------    
    // int variableA = 10;
    // cout << "Printing Value of variableA in Local scope=" << variableA << endl;
    // cout << "Printing Value of variableA in global scope=" << ::variableA << endl;


    // -------------------
    // Reference Variables
    // -------------------
    // int variableA = 10;
    // int & variableB = variableA;
    // cout << "variableA=" << variableA << endl;
    // cout << "variableB=" << variableB << endl;

    return 0;
}
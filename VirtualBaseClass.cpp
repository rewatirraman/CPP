#include<bits/stdc++.h>
using namespace std;

class GrandFather
{
    protected:
        string vill = "RKB";
};

// If we don't use virtual keyword here,
// It will throw error `ambiguous symbol.`
class Father : virtual public GrandFather
{
    // Write the world changing code here.
};

// If we don't use virtual keyword here,
// It will throw error `ambiguous symbol.`
class Uncle : virtual public GrandFather
{
    // Write the world changing code here.
};

class Derived : public Father, public Uncle
{
    public:
        void displayVill(){
            cout << "Printing from Derived :: Name of the village is " << vill << endl;
        }
};

int main(){
    Derived raman;
    raman.displayVill();
    return 0;
}
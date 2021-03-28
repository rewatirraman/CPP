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
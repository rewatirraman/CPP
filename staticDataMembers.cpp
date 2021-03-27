#include <bits/stdc++.h>
using namespace std;


class Employee {
    int id;
    static int count;

    public:
        void setData() 
        {
            cout << "Enter the id : " << endl;
            cin >> id;
            count++;
        }

        void getData()
        {
            cout << "The id of this Employee is : "  << id << " And this is Employee number " << count << endl;
        }

        static void getCount()
        {
            cout << "Value of the count is " << count << endl;
            // Below line will throw error as `id not declared` b/c static variable can only access static data member.
            // count << "Value of id is " << id << endl;
        }

};

int Employee::count;    // Default value of this will be 0 as it is static variable.

int main() {
    Employee rewati, raman;
    rewati.setData();
    rewati.getData();
    Employee::getCount();

    raman.setData();
    raman.getData();
    Employee::getCount();

    return 0;
}
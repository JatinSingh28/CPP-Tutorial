#include <iostream>
using namespace std;
typedef struct employee
{
    int ID;
    char favchar;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};

//uniom provide better memory management than struct

int main()
{
    struct employee harry;
    ep shubham;
    shubham.ID = 99;
    harry.ID = 1;
    harry.favchar = 'c';
    harry.salary = 12000;

    cout << harry.salary << endl;
    cout << harry.ID << endl;
    cout << harry.favchar << endl;
    cout << shubham.ID << endl;

    union money m1;
    m1.rice = 34;
    //m1.car = 'd';
    cout << m1.rice << endl;
    //cout<<m1.car;
    //use only one at a time this saves some memory

    //enum

    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m2 = lunch;
    cout << (m2 == 1) << endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}
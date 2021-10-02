#include <iostream>
using namespace std;

/*
syntax for initialization list in constructor:
constructor(argument-list):initilization-section
{
    assignment + other code
}
class test{
    int a ;
    int b;
    public:
        test(int i, int j):: a(i),b(j){constructor body}
};
*/

class test
{
    int b;
    int a;

public:
    //test(int i, int j) : a(i), b(j)
    //test(int i, int j) : a(i), b(i + j)
    //test(int i, int j) : a(i), b(2 * j)
    //test(int i, int j) : a(i), b(a + j)
    test(int i, int j) : a(b + i), b(j)//-->this will create problem cuz a will be initalized first in private class
    {
        cout << "constructor executed" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};

int main()
{
    test t(4, 6);

    return 0;
}
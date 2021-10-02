#include <iostream>
//there are two types of header files
// 1 system header files it comes with complier ex iostream
// 2 user defined files it is defined by the programer
//#include "this.h"  will produce error if file is not present
using namespace std;

int main()
{
    int a = 5, b = 5;
    cout << "operators in c++:" << endl
         << "hii";
    cout << "following are the operators in c++";
    //arithemetic operators
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of a%b is " << a % b << endl;
    cout << "the value of a++ is " << a++ << endl;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of ++a is " << ++a << endl;
    cout << endl;

    //assignment operators
    //used to assign values to variables
    //int a =3, b =5;
    //char c ='d';
    //comparision operators

    cout << "following are the comparision operators" << endl;
    cout << "the value of a==b  is " << (a == b) << endl;
    cout << "the value of a!=b  is " << (a != b) << endl;
    cout << "the value of a>=b  is " << (a >= b) << endl;
    cout << "the value of a<=b  is " << (a <= b) << endl;
    cout << "the value of a>b  is " << (a > b) << endl;
    cout << "the value of a<b  is " << (a < b) << endl;
    cout << endl;

    cout << "following are the logical operators" << endl;
    cout << "the value of a==b and a<b  is " << ((a == b) && (a < b)) << endl;
    cout << "the value of a==b or a<b  is " << ((a == b) || (a < b)) << endl;
    cout << "the value of not a==b  is " << (!(a == b)) << endl;

    return 0;
}

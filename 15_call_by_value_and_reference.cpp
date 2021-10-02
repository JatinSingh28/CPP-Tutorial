#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

//void swap(int a, int b){ //temp  a  b
//int temp =a;        //4     4  5
//a=b;                //4     5  5
//b =temp;            //4     5  4
//}//this will not swap a and b

//call by reference by pointers
void swappointer(int *a, int *b)
{                  //temp  a  b
    int temp = *a; //4     4  5
    *a = *b;       //4     5  5
    *b = temp;     //4     5  4
}

//call by reference by pointers
/*int & swaprefvar(int &a, int &b){ //temp  a  b
    int temp =a;        //4     4  5
    a=b;                //4     5  5
    b =temp;            //4     5  4
    return a;
}*/
void swaprefvar(int &a, int &b)
{                 //temp  a  b
    int temp = a; //4     4  5
    a = b;        //4     5  5
    b = temp;     //4     5  4
}

int main()
{
    int x = 4, y = 5;
    //cout<<"the sum of 4 and 5 is: "<<sum(x,y);
    cout << "the value of x is:" << x << endl;
    cout << "the value of y is:" << y << endl;

    //swap(x,y);//this will not swap a and b
    //swappointer(&x,&y);//this will swap a and b using pointers reference
    swaprefvar(x, y); //=766;//this will swap a and b using reference variable

    cout << "the value of x is:" << x << endl;
    cout << "the value of y is:" << y << endl;
    return 0;
}
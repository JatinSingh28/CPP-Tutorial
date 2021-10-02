#include<iostream>
using namespace std;

int main(){
    //pointer--> data type which holds the address of other data types

    int a=3;

    int* b =&a;
    
    //&--->address of operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;
   
    //*--->dereference operator (value at)
    cout<<"the value at address b: "<<*b<<endl;

    int**c =&b;
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;


    return 0;
}
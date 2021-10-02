#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

/*factorial(3) = 3*factorial(2)
factorial(3) = 3*2*factorial(1)
factorial(3) = 3*2*1  */

int x,y =1;

int fibonachi(int f){
    if (f<=2){
        return 1;
    }
    return fibonachi(f-2)+fibonachi(f-1);
} 

/*
fib(5)
fib(4)+fib(3)
*/

int main(){
    int a;
    cout<<"enter a number: ";
    cin>>a;
    //cout<<"factorial of "<<a<<" is "<<factorial(a)<<endl;

    cout<<"the term at position "<<a<<" is "<<fibonachi(a)<<endl;
    
    return 0;
}
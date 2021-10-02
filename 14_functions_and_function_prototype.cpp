#include<iostream>
using namespace std;

/*int sum(int a, int b){
    int c = a+b;
    return c;
};*/
//int sum(int a,b)-->unacceptable
//int sum(int , int)-->acceptable

//function prototype
//type function name(argument)

int sum(int a, int b);
//int a and int b is formal function

void p(void);
//void p();-->acceptable

int main(){

    int num1, num2;
    cout<<"enter num1:";
    cin>>num1;
    
    cout<<"enter num2:";
    cin>>num2;

    cout<<"the sum is:"<<sum(num1, num2)<<endl;  
    //num1 and num2 are actual parameter  
    p();

    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
};

void p(){
    cout<<"hello world";
}
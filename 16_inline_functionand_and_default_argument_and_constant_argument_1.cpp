#include<iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}
//this inline function put function in the line at the place of product
// but only use inline function when function is big

/*int product(int a,int b){\
    static int c=0;//this executes only once
    c=c+1;//next time when function runs it will return its value
    return a*b+c;
}*/

float moneyreceived(int cmoney, float factor=1.04){
    return cmoney*factor;
}//factor is default argument so write it after compulsary argument

/*int strlen (const char *p){

}*/

int main(){
    int a, b;
    //cout<<"enter the value of a and b: ";
    //cin>>a>>b;

    /*cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;*/

    int money =100000;
    cout<<"if you have "<<money<<" then you will receive "<<moneyreceived(money,1.1)<<" after one year";

    return 0;
}
#include <iostream>
using namespace std;

int c= 45;
int main(){
    int a, b, c;

    //cout<< "enter value of a:";
    //cin>>a;
    //cout<< "enter value of b:";
    //cin>>b;
    c= a+b;
    //cout<<"the sum is: "<<c<<endl;
    //cout<<"the global value of c is:"<<::c<<"\n";

    //34.4 is double to typecast it into float then
    //write it as 34.4f 

    float d= 34.4f;
    long double e= 34.4l;

    cout<<"the size of 34.4 is"<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is"<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is"<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is"<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is"<<sizeof(34.4L)<<endl;

    //cout<<"the value of d is:"<<d<<endl<< "the value of e is:"<<e;

    //reference variable
    float x= 455;
    float & y=x;
    cout<<x<<"\n";
    cout<<y;

    //TYPE CASTING


    return 0;
}
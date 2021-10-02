#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //int a =3;
    //cout<<"the value of a was:"<<a<<endl;
    //a =45;
    //cout<<"the value of a is:"<<a;
    
    const float pi =3.14;
    cout<<"the value of pi is: "<<pi<<endl;
    //pi = 3.3;
    cout<<"the value of pi didn't change: "<<pi<<endl;

    int x=5, y=6, z=7;
    cout<<"the value of x is: "<<x<<endl;
    cout<<"the value of y is: "<<y<<endl;
    cout<<"the value of z is: "<<z<<endl;

    cout<<"the value of x is: "<<setw(4)<<x<<endl;
    cout<<"the value of y is: "<<setw(4)<<y<<endl;
    cout<<"the value of z is: "<<setw(4)<<z<<endl;

    //operator precedence

    int a=3, b=4;
    //int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}
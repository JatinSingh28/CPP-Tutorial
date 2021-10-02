#include <iostream>
using namespace std;
//comment
/*multi
line 
comment*/

int glo =6;

void sum(){
    int a;
    cout<<glo;
}
 int main(){
     //int a =4;
     //int b =5;
     int glo =9;
     glo =78;
     int a =4, b=5;
     float pi =3.14;
     char c ='d';
     bool t = true;

     sum();
     cout<<"\n"<<glo<<"\n"<<t;
     cout<< "\n the value of a is "<<a<<".\n the value of b is "<<b;
     cout<< "\n the value of pi is"<< pi;
     cout<< "\n the value of c is "<<c;

     return 0;
 }
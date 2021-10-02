#include<iostream>
using namespace std;

int main(){
    int marks[4]={23,45,56,89};
    int mathsmarks[4];
    mathsmarks[0]=56;
    mathsmarks[1]=23;
    mathsmarks[2]=24;
    mathsmarks[3]=45;
    

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;

    mathsmarks[1]=24;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;
    cout<<endl;

    for(int i=0; i<4; i++){
        cout<<"the value of marks "<<i<<" is: "<<marks[i]<<endl;
    }
    cout<<endl;

    int i=0;
    while (i<4)
    {
        cout<<"the value of marks "<<i<<" is: "<<marks[i]<<endl;
        i++;    
    }

    cout<<endl;

    /*int a=0;
    do{
        cout<<"the value of marks "<<a<<" is: "<<marks[a]<<endl;
        i=i+1;
    } while(i<3);

    do
    {
       cout<<"the value of marks "<<a<<" is: "<<marks[a]<<endl;
        i=i+1;
    } while (i<3);*/ 

    //pointers and arrays

    int* p= marks;
    cout<<*(p++)<<endl;
    cout<<*(p)<<endl;
    cout<<*(++p)<<endl;

    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;


    return 0;
}
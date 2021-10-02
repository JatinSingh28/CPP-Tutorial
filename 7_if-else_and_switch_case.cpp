#include <iostream>
using namespace std;

int main(){
    int age;

    cout<<"tell me your age:";
    cin>>age;
    
    //if((age<18) && (age>=1)){
        //cout<<"you cannot come to my party"<<endl;
    //}
    //else if(age==18){
        //cout<<"you will get a pass for my party"<<endl;
    //}
    //else if(age<1){
        //cout<<"you are not yet born"<<endl;
    //}
    //else{
        //cout<<"you can come to my party"<<endl;
    //}

    //switch control structure
    switch(age){
        case 18:
            cout<<"you are 18";
            break;

        case 22:
            cout<<"you are 22";
            break;

        case 2:
            cout<<"you are 2";
            break;
        
        default:
            cout<<"no special case"<<"\n";
            break;
    }

    cout<<"Done with switch case";
    return 0;
}
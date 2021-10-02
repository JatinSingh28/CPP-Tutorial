#include<iostream>
using namespace std;

class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1, int b1, int c1);//declaration
        void getdata(){
            cout<<"the value of a is: "<<a<<endl;
            cout<<"the value of b is: "<<b<<endl;
            cout<<"the value of c is: "<<c<<endl;
            cout<<"the value of d is: "<<d<<endl;
            cout<<"the value of e is: "<<e<<endl;
        }

};

void employee :: setdata(int a1, int b1, int c1){//(::)scope resolution operator
    a=a1;
    b=b1;
    c=c1;
}

class animals{
    private:
        int teeth,hairs;
    public:
        int ear, tail, legs;

    void privatee (int teeth1, int hairs1);
    void gd(){
        cout<<"No. of teeths is: "<<teeth<<endl;
        cout<<"No. of hairs is: "<<hairs<<endl;
        cout<<"No. of legs is: "<<legs<<endl;
        cout<<"No. of ear is: "<<ear<<endl;
        cout<<"No. of tail is: "<<tail<<endl;
    }
};
void animals :: privatee(int teeth1, int hairs1){
    teeth=teeth1;
    hairs=hairs1;
}

int main(){
    employee harry;
    harry.d = 34;//value of  a,b and c cannot be editted the same way cuz they are private var
    harry.e = 56;
    harry.setdata(1,5,9);//a,b,c can only be set by its function
    harry.getdata();

    animals dog;
    dog.ear=2;
    dog.tail=1;
    dog.legs=4;
    dog.privatee(40,50000);
    dog.gd();

    return 0;
}
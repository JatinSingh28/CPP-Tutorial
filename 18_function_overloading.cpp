#include<iostream>
using namespace std;

int add(float a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
int add(int a, int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
//volume of cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}
//volume of cube
int volume(int a){
    return (a*a*a);
} 
//volume of cuboid
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"the sum of 3 and 6 is: "<<add(3,6)<<endl;
    cout<<"the sum of 3, 5 and 6 is: "<<add(3,5,6)<<endl;

    cout<<"the volume of a cylinder of r= 3 and h=6: "<<volume(3,6)<<endl;
    cout<<"the volume of a cube of side =3: "<<volume(3)<<endl;
    cout<<"the volume of a cuboid of l=5 b= 3 and h=4: "<<volume(5,3,4)<<endl;


    return 0;
}
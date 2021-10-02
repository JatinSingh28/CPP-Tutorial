    /*oops recap
    c++ --> initially called  -->c with classes by stroustroup
    class --> extension of structures in c
    structures had limitations
    ----->members are public
    ----->no methods
    classes = structures + more
    classes ---->can have methods and properties
    classes ----> can make few public and private
    structures in c++ are typedefed
    you can declare objects along with class declaration like this:
        class employee{

        }harry, rohan, lovish;
    */
//nesting of member functions
#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
        string s;
        void chk_bin(void);
    
    public:
        void read(void);
        //void chk_bin(void);
        void ones_compliment(void);
        void display(void);
};
void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
  
void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"\nincorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}
void binary :: display(void){
    cout<<"\ndisplaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
}

int main(){
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
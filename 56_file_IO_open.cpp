#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    ofstream out;
    out.open("54a.txt");
    out<<"This is me\n";
    out<<"This is me also ";
    out.close();

    ifstream in;
    string st,st2;
    in.open("54a.txt");
    //in>>st>>st2;
    //cout<<st<<st2;
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();

    return 0;
}
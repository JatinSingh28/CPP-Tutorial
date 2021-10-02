#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //connecting our file to hout stream
    ofstream hout("54a.txt");

    //creating the name string and filling the string entered by user
    cout << "enter your name: " << endl;
    string name;
    cin >> name;

    //writing a string to the file
    hout << "My name is " + name;

    //disconnecting our file from hout stream
    hout.close();

    ifstream hin("54a.txt");
    string content;
    //hin >> content;
    getline(hin,content);
    cout << content;

    return 0;
}
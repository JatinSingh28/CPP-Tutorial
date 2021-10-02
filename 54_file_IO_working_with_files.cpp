//every character can be represented in the form of binary numbers
//input stream -> data enters into program
//output stream -> data goes into file

#include <iostream>
#include <fstream>
/*the useful classes for working with files in c++ are:
1 fstreambase -->
2 ifstream -->derived from fstreambase
3 ofstream -->derived from fstreambase
all these fall under the header file called fstream

-->in order to work with files in c++, you will have to open it. Primarily, there are 2 ways to 
open a file.
1 using a constructor
2 using the member function open() of the class
*/
using namespace std;

int main()
{
    string st = "Harry bhai";
    string st2;
    //opening the files using constructor
    ofstream out("54a.txt"); //write operation
    out << st;

    //opening file using constructor and reading to it
    ifstream in("54b.txt");
    //in >>st2;//just like cin
    //getline(in, st2);//if this line is not present it will only print first word
    //cout<<st2;
    return 0;
}

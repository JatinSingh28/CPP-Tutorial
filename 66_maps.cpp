#include <iostream>
#include <string>
#include <map>
using namespace std;

//maps is an associative array
int main()
{
    map<string, int> marksmap;
    marksmap["harry"] = 98;
    marksmap["jack"] = 52;
    marksmap["rohan"] = 2;

    marksmap.insert({{"kozume",196},{"kuroo",189}});

    map<string, int>::iterator itr;
    for (itr = marksmap.begin(); itr != marksmap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }
    cout<<"the size is: "<<marksmap.size()<<endl;
    cout<<"the max size is: "<<marksmap.max_size()<<endl;
    cout<<"the empty's value is: "<<marksmap.empty()<<endl;

    return 0;
}
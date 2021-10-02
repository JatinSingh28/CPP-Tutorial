#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{                     //ways to create vector
    vector<int> vec1; //zero length integer cector
    vector<int> vec2(4);
    vector<int> vec3(vec2);
    vec2.push_back('5');
    display(vec2);
    //vector<char>vec3(vec2);
    vector<int> v(6, 3);

    int element, size = 5;
    //cout << "Enter the size of your vector" << endl;
    //cin >> size;
    //for (int i = 0; i < size; i++)
    //{
    //    cout << "enter an element to add to this vector: ";
    //    cin >> element;
    //     vec1.push_back(element);
    //}
    //vec1.pop_back();
    //display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    //vec1.insert(iter+1,500,566);
    //display(vec1);
    return 0;
}
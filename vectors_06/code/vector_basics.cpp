// vector_basics
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    for (int i : vec) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"total no of elements in vector "<<vec.size()<<endl;
    cout<<"first element in vector "<<vec.front()<<endl;
    cout<<"last element in vector "<<vec.back()<<endl;
    cout<<"second element in vector "<<vec.at(1)<<endl;
    vec.pop_back();
    cout<<"vector after poping last element "<<endl;
    for (int i : vec) {
        cout<<i<<" ";
    }
    return 0;
}

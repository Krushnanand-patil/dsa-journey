//bitwise_operations
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two integer numbers: ";
    cin>>a>>b;
    cout<<"Bitwise AND  :"<<(a&b)<<endl;
    cout<<"Bitwise OR   :"<<(a|b)<<endl;
    cout<<"Bitwise XOR  :"<<(a^b)<<endl;
    cout<<"1 Left Shift of 1st number :"<<(a<<1)<<endl;
    cout<<"1 Left Shift of 2nd number :"<<(b<<1)<<endl;
    cout<<"1 Right Shift of 1st number :"<<(a>>1)<<endl;
    cout<<"1 Right Shift of 2nd number :"<<(b>>1)<<endl;
    return 0;
}
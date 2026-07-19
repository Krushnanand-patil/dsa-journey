//reverse_integer
#include <iostream>
using namespace std;
int reverse(int number) {
    int reversed_number=0;
    while (number!=0) {
        int remainder=number%10;
        number/=10;
        reversed_number=reversed_number*10+remainder;
    }
    return reversed_number;
}
int main() {
    int a;
    cout<<"Enter integer numbers: ";
    cin>>a;
    int ans=reverse(a);
    cout<<ans<<endl;
    return 0;
}
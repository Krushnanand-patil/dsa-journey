//factorial
#include<iostream>
using namespace std;
int factorial(int n) {
    int fact=1;
    int i=1;
    while (i<=n) {
        fact=fact*i;
        i++;
    }
    return fact;
}
int main() {
    int n;
    cout<<"Enter number to find factorial :";
    cin>>n;
    int fact=factorial(n);
    cout<<"factorial of number"<<n<<"is :"<<fact;
    return 0;
}
// Pattern_09_Butterfly Pattern
#include<iostream>
using namespace std;
int main() {
    const int n=4;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        for (int j=1; j<=2*(n-i); j++) {
            cout<<" ";
        }
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=1; i<=n; i++) {
        for (int j=n-i+1; j>0; j--) {
            cout<<"*";
        }
        for (int j=1; j<=2*(i-1); j++) {
            cout<<" ";
        }
        for (int j=n-i+1; j>0; j--) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
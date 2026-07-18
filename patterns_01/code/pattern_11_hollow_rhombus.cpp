//Pattern_11_Hollow_Rhombus
#include<iostream>
using namespace std;
int main() {
    const int n=5;
    for(int i=0;i<n;i++) {
        for(int j=1;j<=n-i;j++) {
            cout<<" ";
        }
        for(int j=1;j<=n;j++) {
            if (i==0 ||j==1 || i==n-1 ||j==n) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


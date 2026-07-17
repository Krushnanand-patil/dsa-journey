//pattern_10_solid_rhombus
#include <iostream>
using namespace std;
int main() {
    const int n=5;
    for(int i=0;i<n;i++) {
        for(int j=1;j<=n-i;j++) {
            cout<<" ";
        }
        for(int j=1;j<=n;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

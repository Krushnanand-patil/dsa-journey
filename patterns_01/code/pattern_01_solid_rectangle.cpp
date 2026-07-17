// Pattern 01 : Solid Rectangle


#include <iostream>
using namespace std;

int main() {
    int n=4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3*n; j++) {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}
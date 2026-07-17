// pattern_02_hollow_rectangle.cpp

#include <iostream>
using namespace std;

int main() {

    int rows=5;
    int cols=10;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i==1 || j==1 || i==rows || j==cols) {
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
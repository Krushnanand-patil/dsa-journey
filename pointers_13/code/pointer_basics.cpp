#include <iostream>
using namespace std;
int main() {
    int val = 42;
    int* ptr = &val;
    cout << "Value of the variable: " << val << "\n";
    cout << "Address of the variable: " << &val << "\n";
    cout << "Value stored in the pointer: " << ptr << "\n";
    cout << "Value obtained using dereferencing (*ptr): " << *ptr << "\n";
    return 0;
}
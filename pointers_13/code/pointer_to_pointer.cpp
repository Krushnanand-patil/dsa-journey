#include <iostream>
using namespace std;
int main() {
    int num = 100;
    int* ptr = &num;
    int** ptr2 = &ptr;
    cout << "Value of the integer: " << num << "\n";
    cout << "Address of the integer: " << &num << "\n";
    cout << "Pointer value (ptr): " << ptr << "\n";
    cout << "Pointer-to-pointer value (ptr2): " << ptr2 << "\n";
    cout << "*ptr: " << *ptr << "\n";
    cout << "*ptr2: " << *ptr2 << "\n";
    cout << "**ptr2: " << **ptr2 << "\n";
    return 0;
}
#include <iostream>
using namespace std;
void modifyWithPointer(int* ptr) {
    if (ptr != nullptr) {
        *ptr += 10; 
    }
}
void modifyWithReference(int& ref) {
    ref += 20; 
}
int main() {
    int value = 5;
    cout << "Initial value: " << value << "\n\n";
    modifyWithPointer(&value); 
    cout << "After modifyWithPointer(&value): " << value << "\n";
    modifyWithReference(value); 
    cout << "After modifyWithReference(value): " << value << "\n";
    return 0;
}
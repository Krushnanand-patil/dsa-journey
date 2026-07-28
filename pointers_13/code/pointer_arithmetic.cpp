#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; 
    cout << "First element (*ptr): " << *ptr << "\n";
    cout << "Second element (*(ptr + 1)): " << *(ptr + 1) << "\n";
    cout << "Fourth element (*(ptr + 3)): " << *(ptr + 3) << "\n\n";
    ptr++; 
    cout << "Value after ptr++ (*ptr): " << *ptr << "\n\n";
    int* ptr1 = &arr[1]; 
    int* ptr2 = &arr[4]; 
    cout << "ptr1 address: " << ptr1 << "\n";
    cout << "ptr2 address: " << ptr2 << "\n";
    cout << "Pointer subtraction (ptr2 - ptr1): " << (ptr2 - ptr1) << " elements apart\n";
    return 0;
}
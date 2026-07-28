#include <iostream>
using namespace std;
int main() {
    int arr[] = {100, 200, 300, 400, 500};
    cout << "Array address (arr): " << arr << "\n";
    cout << "Address of first element (&arr[0]): " << &arr[0] << "\n\n";
    cout << "First element using arr[0]: " << arr[0] << "\n";
    cout << "First element using *arr: " << *arr << "\n";
    cout << "First element using *(arr + 0): " << *(arr + 0) << "\n\n";
    cout << "Second element using *(arr + 1): " << *(arr + 1) << "\n";
    return 0;
}
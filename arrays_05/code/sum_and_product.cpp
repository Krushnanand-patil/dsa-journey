//sum_and_product
#include <iostream>
using namespace std;
int array_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int array_product(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int sum = array_sum(arr, size);
    int product = array_product(arr, size);
    cout << "Sum of array     : " << sum << endl;
    cout << "Product of array : " << product << endl;
    return 0;
}
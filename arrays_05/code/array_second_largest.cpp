//array_second_largest
#include <iostream>
using namespace std;

int find_second_largest(int arr[], int size) {
    if (size < 2) {
        return -1;
    }
    int largest = arr[0];
    int second_largest = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    if (size < 2) {
        cout << "Array needs at least 2 elements!" << endl;
        return 0;
    }
    int arr[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int result = find_second_largest(arr, size);
    if (result == -1) {
        cout << "There is no second largest element (all elements might be equal)." << endl;
    } else {
        cout << "Second largest element: " << result << endl;
    }
    return 0;
}
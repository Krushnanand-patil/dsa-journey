//reverse_array
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int array[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int i = 0, j = n - 1;
    while (i < j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
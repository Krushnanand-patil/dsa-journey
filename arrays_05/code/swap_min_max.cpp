//swap_min_max
#include <iostream>
using namespace std;

void swap_min_max (int array[], int n) {

    int min_index,max_index,temp,i;
    int min=array[0];
    int max=array[0];
    for (i = 0; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
            min_index = i;
        }
        if (array[i] > max) {
            max = array[i];
            max_index = i;
        }
    }
    temp=array[min_index];
    array[min_index]=array[max_index];
    array[max_index]=temp;

    for (i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}

int main () {
    int n,i;
    cout << "Enter size of array: ";
    cin >> n;

    int array[n];
    cout << "Enter elements of array: ";
    for (i = 0; i < n; i++) {
        cin >> array[i];
    }
    swap_min_max(array,n);
    return 0;
}
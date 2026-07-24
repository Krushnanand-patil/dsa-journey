//maximum_subarray_sum_bruteforce
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int array[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int maxSum = INT_MIN; 
    for (int i = 0; i < n; i++) {
        int currentSum = 0; 
        for (int j = i; j < n; j++) {
            currentSum += array[j]; 

            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    cout << "Maximum Subarray Sum : " << maxSum << endl;
    return 0;
}
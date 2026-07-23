//kadanes_algorithm
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array :";
    cin >> n;
    int array[n];
    cout<<"Enter elements is array ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        currentSum += array[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    cout <<"Max sum is :"<<maxSum << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int binarySearchIterative(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n) || n <= 0) {
        return 0;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int result = binarySearchIterative(arr, target);
    if (result != -1) {
        cout << result << "\n";
    } else {
        cout << "Element not found\n";
    }
    return 0;
}
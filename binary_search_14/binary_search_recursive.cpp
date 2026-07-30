#include <iostream>
#include <vector>
using namespace std;
int binarySearchRecursive(const vector<int>& arr, int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        return mid;
    }
    if (target < arr[mid]) {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }
    return binarySearchRecursive(arr, mid + 1, right, target);
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
    int index = binarySearchRecursive(arr, 0, n - 1, target);
    if (index != -1) {
        cout << "Element found at index " << index << "\n";
    } else {
        cout << "Element not found\n";
    }
    return 0;
}
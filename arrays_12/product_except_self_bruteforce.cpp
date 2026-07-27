#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n) || n <= 0) {
        return 0;
    }
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    vector<int> result(n, 1);
    for (int i = 0; i < n; ++i) {
        int current_product = 1;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                current_product *= nums[j];
            }
        }
        result[i] = current_product;
    }
    for (int i = 0; i < n; ++i) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}
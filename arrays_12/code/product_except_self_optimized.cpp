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
    vector<int> answer(n, 1);
    for (int i = 1; i < n; ++i) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    int right_suffix_product = 1;
    for (int i = n - 1; i >= 0; --i) {
        answer[i] *= right_suffix_product;
        right_suffix_product *= nums[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << answer[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}
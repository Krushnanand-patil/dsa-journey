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
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    vector<int> answer(n);
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    for (int i = n - 2; i >= 0; --i) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < n; ++i) {
        answer[i] = prefix[i] * suffix[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << answer[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}
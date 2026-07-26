#include <iostream>
using namespace std;
long long fibonacci(int n) {
    // Base Cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    cout << "Enter n: ";
    if (!(cin >> n) || n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 0;
    }
    long long ans = fibonacci(n);
    cout << "F(" << n << ") = " << ans << endl;
    return 0;
}
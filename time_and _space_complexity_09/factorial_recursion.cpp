#include <iostream>
using namespace std;
long long factorial(int n) {
    // Base Case: 0! = 1 and 1! = 1
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    if (!(cin >> n) || n < 0) {
        cout << "Please enter a valid non-negative integer." << endl;
        return 0;
    }
    long long result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}
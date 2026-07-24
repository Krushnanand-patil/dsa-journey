#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}
int main() {
    int n;
    cout << "Enter an integer: ";
    if (!(cin >> n)) {
        cout << "Invalid input." << endl;
        return 0;
    }
    if (isPrime(n)) {
        cout << n << " is a Prime Number." << endl;
    } else {
        cout << n << " is NOT a Prime Number." << endl;
    }
    return 0;
}
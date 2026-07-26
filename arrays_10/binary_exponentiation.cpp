#include <iostream>
using namespace std;
double computePower(double base, int exp) {
    if (exp == 0) {
        return 1.0;
    }
    if (base == 0.0) return 0.0;
    if (base == 1.0) return 1.0;
    long long binaryExp = exp;
    if (binaryExp < 0) {
        base = 1.0 / base;
        binaryExp = -binaryExp;
    }
    double result = 1.0;
    double currentProduct = base;
    while (binaryExp > 0) {
        if (binaryExp & 1) {
            result *= currentProduct;
        }
        currentProduct *= currentProduct;
        binaryExp >>= 1;
    }
   return result;
}
int main() {
    double x;
    int n;
    cout << "Enter base (x): ";
    if (!(cin >> x)) {
        cout << "Invalid base input!" << endl;
        return 1;
    }
    cout << "Enter exponent (n): ";
    if (!(cin >> n)) {
        cout << "Invalid exponent input!" << endl;
        return 1;
    }
    if (x == 0.0 && n <= 0) {
        if (n == 0) {
            cout << "0^0 is mathematically undefined." << endl;
        } else {
            cout << "Division by zero error (0 raised to negative power)!" << endl;
        }
        return 1;
    }
    double ans = computePower(x, n);
    cout << x << " ^ " << n << " = " << ans << endl;
    return 0;
}
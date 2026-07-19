//power_of_two
#include <iostream>
using namespace std;
bool is_power_of_two(int a) {
    if (a < 1) {
        return false;
    }
    while (a % 2 == 0) {
        a /= 2;
    }
    return (a == 1);
}
int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    if (is_power_of_two(a)) {
        cout << a << " is a power of 2" << endl;
    } else {
        cout << a << " is not a power of 2" << endl;
    }
    return 0;
}
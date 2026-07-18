//decimal_to_binary
#include <iostream>
using namespace std;

int decimal_to_binary(int number) {
    int place=1;
    int binary_number =0;
    int remainder;
    while (number>0){
        remainder = number % 2;
        number = number / 2;
        binary_number = (remainder * place)+binary_number;
        place =place *10;
    }
    cout << binary_number << endl;
    return binary_number;
}
int main() {
    int number;
    cout << "Enter a decimal number to convert in binary number: ";
    cin >> number;
    decimal_to_binary(number);
    return 0;
}
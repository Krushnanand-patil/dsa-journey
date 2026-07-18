//binary_to_decimal
#include <iostream>
using namespace std;

int binary_to_decimal(int number) {
    int remainder=0;
    int decimal_number=0;
    int pow_of_two=1;

    while (number>0) {
        remainder = number % 10;
        number = number /10;
        decimal_number= decimal_number+ (remainder*pow_of_two);
        pow_of_two*=2;
    }
    return decimal_number;
}

int main() {
int number;
    cout<<"Enter a Binary number to convert it into Decimal: ";
    cin>>number;
    int answer=binary_to_decimal(number);
    cout<<answer;
    return 0;
}
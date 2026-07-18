//product_of_two_numbers.
#include <iostream>
using namespace std;

int product_of_two_numbers(int num1, int num2) {
    int product = num1 * num2;
    return product;
}
int main() {
    int a,b;
    cout<<"Enter one number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;

    int product=product_of_two_numbers(a,b);
    cout<<"Product of two numbers is "<<product;
    return 0;
}
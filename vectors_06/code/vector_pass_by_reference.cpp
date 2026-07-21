#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}
void doubleElements(vector<int>& vec) {
    for (int &num : vec) {
        num *= 2;
    }
}
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Original Vector:" << endl;
    printVector(numbers);
    doubleElements(numbers);
    cout << "\nModified Vector:" << endl;
    printVector(numbers);
    return 0;
}
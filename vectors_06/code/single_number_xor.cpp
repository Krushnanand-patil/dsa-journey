//single_number_xor
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int singleNumber = 0;
    vector<int> vec={5,1,2,1,2,5,6};
    for (int i : vec) {
        singleNumber^=i;
    }
    cout << "Single number: " << singleNumber << endl;
    return 0;
}
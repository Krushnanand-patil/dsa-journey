//vector_capacity
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    int values[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    for (int val : values) {
        vec.push_back(val);

        cout << "After inserting " << val << endl;
        cout << "Size     : " << vec.size() << endl;
        cout << "Capacity : " << vec.capacity() << endl;
        cout << "----------------------" << endl;
    }
    return 0;
}
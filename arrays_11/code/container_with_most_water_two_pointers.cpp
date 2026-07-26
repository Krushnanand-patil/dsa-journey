#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n < 2) {
        cout << "Maximum Water : 0" << endl;
        return 0;
    }
    int* height = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }
    int left = 0;
    int right = n - 1;
    int max_water = 0;
    while (left < right) {
        int width = right - left;
        int h = (height[left] < height[right]) ? height[left] : height[right];
        int current_water = width * h;
        if (current_water > max_water) {
            max_water = current_water;
        }
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    cout << "Maximum Water : " << max_water << endl;
    delete[] height;
    return 0;
}
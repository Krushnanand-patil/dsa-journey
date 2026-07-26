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
    int max_water = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int width = j - i;
            
            // Custom min logic without <algorithm>
            int h = (height[i] < height[j]) ? height[i] : height[j];
            int current_water = width * h;

            // Custom max logic
            if (current_water > max_water) {
                max_water = current_water;
            }
        }
    }
    cout << "Maximum Water : " << max_water << endl;
    delete[] height;
    return 0;
}
#include <iostream>
using namespace std;
int calculateMaxProfit(const int prices[], int totalDays) {
    if (totalDays < 2) {
        return 0;
    }
    int maxProfitEarned = 0;
    int minPurchasePrice = prices[0]; 
    for (int day = 1; day < totalDays; ++day) {
        int currentPrice = prices[day];
        int potentialProfit = currentPrice - minPurchasePrice;
        if (potentialProfit > maxProfitEarned) {
            maxProfitEarned = potentialProfit;
        }
            if (currentPrice < minPurchasePrice) {
            minPurchasePrice = currentPrice;
        }
    }
    return maxProfitEarned;
}
int main() {
    int n;
    cout << "Enter the number of days (n): ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid number of days." << endl;
        return 0;
    }
    int* prices = new int[n];
    cout << "Enter stock prices for " << n << " days:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    int maxProfit = calculateMaxProfit(prices, n);
    cout << "\nMaximum Profit: " << maxProfit << endl;
    delete[] prices;
    return 0;
}
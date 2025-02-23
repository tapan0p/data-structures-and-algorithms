// Best Time to buy and sell stock
/*
	Explanation:
	We start by initializing the minimum price to the maximum integer value and the maximum profit to 0.
	We loop through the prices array, and for each price:
	If the price is less than the current minimum price, we update the minimum price.
	Otherwise, if the difference between the price and the minimum price is greater than the current maximum profit, we update the maximum profit.
	Finally, we return the maximum profit
    
	Time Complexity: O(n), where n is the length of the prices array.
	Space Complexity: O(1), as we are only using two variables to keep track of the minimum price and maximum profit
*/
#include <iostream>
#include <vector>
#include <climits> // for INT_MIN

using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX; // initialize to maximum value to start with
    int maxProfit = 0; // initialize to 0

    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // update minimum price seen so far
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice; // update maximum profit seen so far
        }
    }

    return maxProfit;
}

int main() {
    // example usage
    vector<int> prices {7, 1, 5, 3, 6, 4};
    int max_profit = maxProfit(prices);
    cout << "Max profit: " << max_profit << endl;

    return 0;
}

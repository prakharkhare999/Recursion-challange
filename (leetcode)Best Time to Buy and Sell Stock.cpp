// Day(10) --- Best Time to Buy and Sell Stock
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
class Solution {
public:

void maxprofitfinder(vector<int>&prices,int i,int& minprice,int& maxprofit){
//base

if(i==prices.size()){
    return;

}
//ek solution

if(prices[i]<minprice){
    minprice=prices[i];

}
int totalprofit=prices[i]-minprice;
if(totalprofit > maxprofit){
    maxprofit=totalprofit;
}
//recursion
maxprofitfinder(prices,i+1,minprice,maxprofit);

}

    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=INT_MIN;
        maxprofitfinder(prices,0,minprice,maxprofit);
        return maxprofit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int bestBuy = prices[0];
       int maxProfit = 0;
       for(int price:prices){
        bestBuy=min(bestBuy,price);
        maxProfit = max(maxProfit,price-bestBuy);
       }
       return maxProfit;
    }
};
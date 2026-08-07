class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int minprice = prices[0];
        int profit = 0;
        for(auto x: prices){
            if(minprice>x){
                minprice=x;
            }
            int pr = x-minprice;
            profit = max(profit,pr);
        }
        return profit;
    }
};

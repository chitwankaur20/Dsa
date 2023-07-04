class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int mini = 1000000;
    int maxDiff=0;
    for(int i =0; i < prices.size(); i++){
        mini = min(prices[i],mini);
        maxDiff= max(prices[i]-mini, maxDiff);
    }
    return maxDiff;
    }
  
};
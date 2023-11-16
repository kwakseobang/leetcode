class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        vector<int> dp(len+1,0);
        dp[0] = 0;
        int maxProfit = 0;
        int cmp = 99999999999999;
        //n번째 날에 어떤 걸 팔아야 극대화가 되냐 라는 느낌으로 풀기.
        for(int i = 1; i < len; i++){
            cmp = min(cmp,prices[i-1]);
             dp[i] = max(prices[i]-cmp,dp[i-1]);
            maxProfit = max(dp[i],maxProfit);
        }
        return  maxProfit;
    }
};
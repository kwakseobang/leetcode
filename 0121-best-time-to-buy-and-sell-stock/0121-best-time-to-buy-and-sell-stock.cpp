class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int maxProfit = 0;
        int cmp = INT_MAX;
        //n번째 날에 어떤 걸 팔아야 극대화가 되냐 라는 느낌으로 풀기.
        for(int i = 1; i < len; i++){
            cmp = cmp < prices[i-1] ? cmp:prices[i-1];
            // cmp = min(cmp,prices[i-1]);
            maxProfit =  (prices[i]- cmp) > maxProfit ? (prices[i]- cmp):maxProfit;
        }
        return maxProfit;
    }
};
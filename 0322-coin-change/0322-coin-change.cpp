class Solution {
public:
      int coinChange(vector<int>& coins, int amount) {
        vector<int>table(amount+1,INT_MAX-1); //각 테이블 인덱스는 인덱스 가격의 최소값
        table[0] = 0;
        int len = coins.size();
        for(int i = 0; i<len;i++){
            for(int j = 1; j < amount+1; j++){
                if(j-coins[i]>=0){
                table[j] = min(table[j],table[j-coins[i]]+1);
                }
            }
        }
        return (table[amount] != INT_MAX-1) ? table[amount]: -1;
    }

    
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j;
        int len = nums.size();
      for(int i = 1; i< len;i++){
          int tmp = nums[i];
          for(j = i-1; j>=0 && nums[j] > tmp;j--){
                  nums[j+1] = nums[j];
          }
          nums[j+1] = tmp;
      }
      
    }
};
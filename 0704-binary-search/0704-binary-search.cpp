class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        if(len == 1){
          return (nums[0] == target) ?  0 : -1;
        }
        for(int i = (len/2)-1; i>=0; i--){
            int left = (i*2) + 1;
            int right = (i*2) + 2;
            if(nums[i] == target) return i;
            
            else if(nums[left] == target){
                return left;
            }
            else if(right >= len){
                continue;
            }
            else if(nums[right] == target){
                return right;
            }
            
        }
        return -1;
        
    }
};
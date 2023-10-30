class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int> res;
        for(int i = 0; i<len; i++){
            int target = nums[i];
            int n = count_if(nums.begin(),nums.end(),[target](int x) { return x < target;});
            res.push_back(n);
        }
        return res;
    }
    
};
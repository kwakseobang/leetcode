class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            int cmp=target - nums[i];
            if(m.count(cmp) != 0){
                res.push_back(m[cmp]);
                res.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return res;
    }
};
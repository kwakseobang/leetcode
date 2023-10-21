class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        map<int,int>m;
        for(int i = 0; i<nums.size();i++){
            int key = target-nums[i];
            if(m.contains(key)){
                res.push_back(m[key]);
                res.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return res;
    }
};
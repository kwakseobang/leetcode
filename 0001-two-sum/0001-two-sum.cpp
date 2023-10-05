class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int,int> map1;
        int len = nums.size();
        for(int i = 0; i<len;i++){
            if(map1.find(target-nums[i]) != map1.end()) {//값 찾은 경우
                res.push_back(i);
                res.push_back(map1[target-nums[i]]);
                break;
            }
            map1[nums[i]] = i;
    }
        return res;
    }
};
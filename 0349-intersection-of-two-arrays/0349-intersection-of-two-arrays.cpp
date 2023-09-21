class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        //일부러 set 안쓰고 해봤슴
        for(int i = 0; i<nums2.size();i++){
            if(count(nums1.begin(),nums1.end(),nums2[i]) && !(count(result.begin(),result.end(),nums2[i]))){
                result.push_back(nums2[i]);
            }
        }
        return result;
    }
};
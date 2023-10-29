class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int idx = 0;
        while(!nums1.empty() && !nums2.empty()){
            if(find(nums1.begin(),nums1.end(),nums2[idx]) != nums1.end() ){
                int rmIdx = find(nums1.begin(),nums1.end(),nums2[idx]) - nums1.begin();
                res.push_back(nums2[idx]);
                nums1.erase(nums1.begin() + rmIdx);
            }
                nums2.erase(nums2.begin());

    
        }
        return res;
    }
};
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        while(!nums1.empty() && !nums2.empty()){
            if(find(nums1.begin(),nums1.end(),nums2[0]) != nums1.end() ){
                int rmIdx = find(nums1.begin(),nums1.end(),nums2[0]) - nums1.begin();
                res.push_back(nums2[0]);
                nums1.erase(nums1.begin() + rmIdx);
            }
                nums2.erase(nums2.begin());
        }
        return res;
    }
};
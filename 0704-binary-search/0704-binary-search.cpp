class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = (left + right) / 2;
        
        while(left<=right && mid <= right){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]>target){
                right = mid - 1;
                // mid = (left + right) / 2;
            }
            else {
                left = mid + 1;
            }
            mid = (left + right) / 2;
        }
        // if(left != mid-1) return left;
        // else if(mid != right-1) return right;
        return -1;
    }
};
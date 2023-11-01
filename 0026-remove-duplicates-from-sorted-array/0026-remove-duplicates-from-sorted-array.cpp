class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //중복 개수 만큼 _ 표시 맵 사용하면 어떨까?
            map<int,int> m;
            int len = nums.size();
            int res = 0;
            for(int i = 0; i<nums.size(); i++){
                if(m.contains(nums[i])){ //key가 존재할 경우
                    m[nums[i]]++;
                    nums.erase(nums.begin()+i);
                    --i;
                    // res++;
                }else {
                    m[nums[i]] = 0; //없을 경우 생성
                    res++;
            }
            }
        return res;
        
        }
    
};
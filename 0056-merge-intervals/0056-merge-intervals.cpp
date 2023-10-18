class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end()); // 정렬
        int j = 0;
        int i = 1;
        res.push_back(intervals[0]);
        while(i<intervals.size()){
            if (res[j][1] >= intervals[i][0]){
                res[j][1] = max(res[j][1],intervals[i][1]);
            }
            else{
                j++;
                res.push_back(intervals[i]);
            }
            i++;
            }
            
        return res;
    }
    

};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end()); // 정렬
        int j = 0;
        res.push_back(intervals[0]);
        for(int i = 1; i<intervals.size();i++){
            if (res[j][1]>=intervals[i][0]){
                res[j][1] = max(res[j][1],intervals[i][1]);
            }
            else{
                j++;
                res.push_back(intervals[i]);
            }
            }
            
        return res;
    }
    

};
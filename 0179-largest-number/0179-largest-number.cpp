class Solution {
public:
    static bool compare(string a,string b){
        return a + b > b + a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string>str;
        string res;
        for(int s: nums){
            str.push_back(to_string(s));
        }
        sort(str.begin(),str.end(),compare);
        if(str[0] == "0") return "0";
        for(auto i: str){
            res += i;
        }
        
        return res;
    }
};
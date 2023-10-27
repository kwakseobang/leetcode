class Solution {
public:
    bool isAnagram(string s, string t){
        if(s.size() != t.size()) return false;
        map<char,int>m1;
        int len = s.size();
        for(int i = 0;i<len;i++){
            m1[s[i]]++;
            m1[t[i]]--;
        }
       for(auto pair:m1){
           if(pair.second) return false;
       }
     return true;

    }
    
};
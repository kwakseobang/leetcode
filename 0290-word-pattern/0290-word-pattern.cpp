class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream stream(s);
        string ss;
        vector<string> str;
        while(stream >> ss){
            str.push_back(ss);
        }
        if(pattern.size() != str.size())return false;

        unordered_map<char,string> map;
        unordered_map<string,char> map2;
        for(int i = 0; i<str.size(); i++){
            if(!map.count(pattern[i])){
                map2[str[i]] = pattern[i];
                map[pattern[i]] = str[i];
            }
            else continue;
        }
         for(int i = 0; i<str.size(); i++){
            if (map2[str[i]]!= pattern[i]){return false;}
         }
         return true;

        
    }
};
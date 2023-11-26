class Solution {
public:
    bool wordPattern(string pattern, string s) {
       map<char,string> m; 
        map<string,char> m2;
        stringstream ss(s);
        vector<string> v;
        string str;
        while (ss >> str){
            v.push_back(str);
        }
        if(v.size() != pattern.size()) return false;
        for(int i=0; i<pattern.size();i++){
            if(m.find(pattern[i])!= m.end()){ //key가 존재하는경우 
                if (m2[v[i]] != pattern[i]) return false;
            }
            else {
                if(m2.contains(v[i]))return false;
                m2[v[i]] = pattern[i]; //키를 문자로 값을 패턴으로
                m[pattern[i]] = v[i]; //반대
            }
        }
        return true;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
    map<char,int>m1;
    map<char,int>m2;
    for(int i = 0; i<s.size(); i++){
        if(!m1.contains(s[i])){
            m1[s[i]] = 1;
        }
        else{
            int tmp = m1[s[i]];
            m1[s[i]] = tmp + 1;
        }
    }
    for(int i = 0; i<t.size(); i++){
        if(!m2.contains(t[i])){
            m2[t[i]] = 1;
        }
        else{
            int tmp = m2[t[i]];
            m2[t[i]] = tmp + 1;
        }
    }
    for(auto &pair: m1){
        char key = pair.first;
        if(m1[key] != m2[key]){
            cout <<"failed.."<<endl;
            return false;
        }
        cout << key<<" "<<m1[key] <<" "<<endl;
    }
    return true;
    }
};
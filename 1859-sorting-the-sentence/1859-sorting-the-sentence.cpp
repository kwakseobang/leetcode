class Solution {
public:
    string sortSentence(string s) {
        int count = 0;
            map<int,string>str; //최대 9개라고 정함.
            string res ="";
            string ss;
            for(char c:s){
                if(isdigit(c)){
                    int idx =c-'0';
                    str[idx] = ss;
                    count++;
                    ss = "";
                }
                else if(isspace(c)) continue;
                else ss += c;

                cout<<str[c];
            }
    
        for(int i =1; i<=count; i++)
            res+=str[i]+" ";
        // cout << str[i]<<" ";
        res.erase(res.find_last_not_of(" ")+1);
         return res;
    }
   
};
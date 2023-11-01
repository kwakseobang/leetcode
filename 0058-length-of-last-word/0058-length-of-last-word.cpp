class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(" ")+1);
        int start = s.rfind(" ") + 1;
        return s.length()-start;
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = 0;
        if(s.length() == 0 && t.length() == 0) return true;
        for(int i=0; i<t.length(); i++){
            if(s[a] == t[i]) a++; 
            if(s.length() == a) return true; 
        }
        return false;
    }
};
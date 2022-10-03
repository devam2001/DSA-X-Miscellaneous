class Solution {
public:
    bool isValid(string s) {
        if(s.length()<2 || s.length()%2 != 0)   return false;
         unordered_map<char, char> M = {    {'(',')'},
                                            {'[',']'},
                                            {'{','}'},
                                        };
        int i = 0;
        stack<char> S;
        while(i<s.length()){
            if(M.find(s[i]) != M.end()){
                S.push(s[i]);
            }
            else{
                if(!S.empty() && s[i] == M[S.top()])
                    S.pop();
                else
                    return false;
            }
            ++i;
        }
        return S.empty();
    }
    
};
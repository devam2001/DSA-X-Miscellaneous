class Solution {
public:
    bool halvesAreAlike(string s) {
        int len = s.length()/2, cnt1 = 0, cnt2 = 0 ;
        for(int i = 0; i < s.length(); i++){
            if(i < len ){
                if( tolower(s[i]) == 'a' ||  tolower(s[i]) == 'e' ||  tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                    cnt1++;
            }
            else{
                if( tolower(s[i]) == 'a' ||  tolower(s[i]) == 'e' ||  tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                    cnt2++;
            }
        }
        if(cnt1 == cnt2)  return true;
        else return false;
        
    }
};
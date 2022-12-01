class Solution {
public:
    bool halvesAreAlike(string s) {
        int len = s.length()/2, a = 0, b = 0 ;
        for(int i = 0; i < s.length(); i++){
            if(i < len ){
                if( tolower(s[i]) == 'a' ||  tolower(s[i]) == 'e' ||  tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                    a++;
            }
            else{
                if( tolower(s[i]) == 'a' ||  tolower(s[i]) == 'e' ||  tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                    b++;
            }
        }
        if(a == b)  return true;
        else return false;
        
    }
};
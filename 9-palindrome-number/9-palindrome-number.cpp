class Solution {
public:
    bool isPalindrome(int x) {
        int ld,num = x;
        long int rev = 0;
        if(x < 0)
            return false;
        while(num>0){
            ld = num%10;
            rev = rev*10 + ld;
            num /= 10;
        }
        return rev == x;
    }
};
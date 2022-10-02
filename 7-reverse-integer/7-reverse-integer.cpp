class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
      
        while(x!=0){
           if(INT_MAX/10 < rev || INT_MIN/10 > rev)
               return 0;
            rev = rev*10 + x%10;           
            x /= 10;
        }
        return rev;
    }
};
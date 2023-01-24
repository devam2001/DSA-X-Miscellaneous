/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        if(n == 1) return 1;
        int left = 1, right = n, res = n;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(isBadVersion(mid)){
                res = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return res;
    }
}
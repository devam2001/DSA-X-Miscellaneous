class Solution {
    public int findMiddleIndex(int[] nums) {
        int sum=0, n=nums.length,lsum=0;
        for(int i=0; i<n; i++) sum += nums[i];
        for(int i=0; i<n; i++){
            if(lsum == sum - lsum - nums[i]) return i;
            lsum += nums[i];
        }
        return -1;
    }
}
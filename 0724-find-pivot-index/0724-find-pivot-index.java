class Solution {
    public int pivotIndex(int[] nums) {
        int n = nums.length,sum = 0,lsum=0;
        for(int i = 0; i<n; i++) sum += nums[i];
        for(int i = 0; i<n; i++){
            if(lsum == sum - lsum - nums[i]) return i;
            lsum += nums[i]; 
        }
        return -1;
    }
}
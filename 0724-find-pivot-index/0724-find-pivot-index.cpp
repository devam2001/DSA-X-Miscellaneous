class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(),lsum = 0, sum=0;
        for(int i = 0; i<n ;i++) sum += nums[i];
        for(int i=0; i<n; i++){
            if(lsum == sum - lsum - nums[i]) return i;
            lsum = lsum + nums[i];
        }
        return -1;
    }
};
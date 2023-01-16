class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0,lsum = 0;
        for(int x : nums){
            sum += x;
        }
        for(int i=0; i<nums.size(); i++){
            int rsum = sum - nums[i] - lsum ;
            if(lsum == rsum) return i;
            lsum += nums[i];
        }
        return -1;
    }
};
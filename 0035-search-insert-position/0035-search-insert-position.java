class Solution {
    public int searchInsert(int[] nums, int target) {
        int n = nums.length-1;
        int l = 0, r = n;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid]>target) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
}
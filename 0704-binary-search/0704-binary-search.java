class Solution {
    public int search(int[] nums, int target) {
        int l = 0, r = nums.length -1,mid;
        if(nums.length == 0 && target == nums[0]) return 0;
        for(int i=0; l<=r; i++){
        mid = l + (r-l)/2;
        if(target == nums[mid]) return mid;
        else if(target > nums[mid]) l = mid + 1;
        else r = mid - 1;
        }
        return -1;
    }
}
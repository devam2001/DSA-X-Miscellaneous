class Solution {
    public int[] sortedSquares(int[] nums) {
        int n = nums.length;
        int arr[] = new int[n];
        int s = 0, e = n-1;
        for(int k=n-1; k >=0; k--){
            if(Math.abs(nums[s]) > Math.abs(nums[e])){
                arr[k] = nums[s] * nums[s];
                s++;
            }
            else{
                arr[k] = nums[e] * nums[e];
                e--;
            }
        }
        // for(int i=0; i<nums.length; i++) nums[i] = nums[i] * nums[i];
        // Arrays.sort(nums);
        return arr;
    }
}
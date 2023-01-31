class Solution {
    public int[] sortedSquares(int[] nums) {
            int n = nums.length;
    int [] arr = new int[n];
    int i = 0,j=n-1;
    for(int k =n-1;k >= 0;k--){
        if(Math.abs(nums[i]) > Math.abs(nums[j])){
            arr[k] = nums[i]*nums[i];
            i++;
        }
        else{
            arr[k] = nums[j] * nums[j];
            j--;
        }
    }
        // for(int i=0; i<nums.length; i++) nums[i] = nums[i] * nums[i];
        // Arrays.sort(nums);
        return arr;
    }
}
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        // bool is_Sorted = adjacent_find(nums.begin(),nums.end(),greater<int>())==nums.end();   //greater<int> comparision func. to check in accending order
        int size = nums.size(),a=INT_MAX,b=a;
        // if(is_Sorted == 1){
        //     return true;
        // }
        // else{
            for(auto x:nums){
                if(x <= a) a = x;
                else if(x <= b) b = x;
                else  return true;
            // }
            }
        return false;
        }
    
};
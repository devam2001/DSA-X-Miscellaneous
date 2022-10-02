class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0, N = numbers.size();
        int j = N-1;
        while(s<j){
            if(numbers[s] + numbers[j] == target)
                return {s+1,j+1};
            else if(numbers[s] + numbers[j] < target)
                s++;
            else
                j--;
        }
        return {-1,-1};
    }
};
class Solution {
public:
    //to find max element
    int Max(vector<int> balance){
        int n = balance.size();
        int max = balance[0];   //consider first element as max
        for(int x : balance) if(x > max)  max = x;
        return max;
    }
    
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> v;
        for(int i = 0; i<accounts.size(); i++){
           int wealth = 0;
            for(int j = 0; j<accounts[i].size(); j++){
                wealth += accounts[i][j];
            }
            v.push_back(wealth);
        }
        return Max(v);
    }
};
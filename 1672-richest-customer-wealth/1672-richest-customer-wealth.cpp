class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>ans(accounts.size());
        int max=-9999999;
        for(int i=0; i<accounts.size();i++){
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                
                wealth+=accounts[i][j];
            }
            if(wealth>max){
                max=wealth;
            }
        }
        return max;
    }
};
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>ans(accounts.size());
        int max=-9999999;
        for(int i=0; i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                ans[i]+=accounts[i][j];
            }
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]>max){
                max=ans[i];
            }
        }
        return max;
    }
};
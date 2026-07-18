class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0 ; i<=n ; i++){
            ans.push_back(i);
        }
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                if(nums[i]==j){
                    ans[j]=-1;
                    break;
                }
            }
        }
        int k=0;
        for(int i=0  ; i<=n ; i++){
            if(ans[i] != -1){
                k=ans[i];
                break;
            }
        }
        return k;
    }
};
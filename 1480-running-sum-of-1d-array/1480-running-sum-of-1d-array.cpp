class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s=nums.size();
        vector<int>answer(s);
        for(int i=0 ; i<s ; i++){
            for(int j=0 ; j<=i ; j++){
                answer[i]+=nums[j];
            }
        }
        return answer;
    }
};
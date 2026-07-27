class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int num=s.size();
        string ans(num,'0') ;
        for(int i=0;i<num;i++){
            ans[indices[i]]=s[i];

        }
        return ans;


    }
};
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp ;
        map<char,int>mpp;
        int s=ransomNote.size();
        for(char c : ransomNote){
            mp[c]+=1;
        }
        for(char c: magazine){
            mpp[c]+=1;
        }
        for(auto x : mp){
            if(mpp[x.first] >= mp[x.first]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
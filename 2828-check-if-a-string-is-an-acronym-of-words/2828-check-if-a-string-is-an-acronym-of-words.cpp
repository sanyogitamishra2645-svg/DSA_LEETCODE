class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans;
        for(int i=0 ; i<words.size() ; i++){
            for(char c : words[i]){
                ans+=c;
                break;
            }
        }
        if(ans==s){
            return true;
        }
        else{
            return false;
        }
    }
};
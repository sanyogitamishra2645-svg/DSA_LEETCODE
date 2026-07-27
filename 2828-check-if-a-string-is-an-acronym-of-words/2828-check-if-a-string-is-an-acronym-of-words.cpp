class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        for(int i=0 ; i<words.size() ; i++){
            if(s.size()!= words.size()){
                return false;
            }
            if(words[i][0]==s[i]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
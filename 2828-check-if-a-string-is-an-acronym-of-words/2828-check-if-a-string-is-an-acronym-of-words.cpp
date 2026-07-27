class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        for(int i=0 ; i<words.size() ; i++){
            if(s.size()!= words.size()){
                return false;
            }

            for(char c : words[i]){
                if(s[i]==c){
                    break;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
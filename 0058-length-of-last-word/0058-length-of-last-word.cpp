class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=0;
        if(s.back() != ' '){
            while(!s.empty() && s.back() != ' '){
                n+=1;
                s.pop_back();
            }
        }
        else{
            while(!s.empty() &&s.back() ==' '){
                s.pop_back();
            }
            while(!s.empty() && s.back() != ' '){
                n+=1;
                s.pop_back();
            }
        }
        return n;

    }
};
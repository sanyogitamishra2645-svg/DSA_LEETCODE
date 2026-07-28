class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                ans+=s[i];
            }
            else if(s[i]>='a' && s[i]<='z'){
                ans+=s[i];
            }
            else if(s[i]>='A' && s[i]<='Z'){
                ans+=tolower(s[i]);
            }
            else{
                continue;
            }
        }
        string s1=ans;
        reverse(ans.begin(),ans.end());
       if(s1==ans) return true;
       else return false;


    }
};
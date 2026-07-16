class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        string s1=to_string(x);
        int a=s.size();
        if(s[0]==s1[0]){
            return false;
        }
        else{
            for(int i=0 ; i<a ; i++){
                if(s[i]==s1[0]){
                    return true ;
                }
            }
        }
        return false;

    }
};
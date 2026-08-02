class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        int n=s.size();
        int i=0;
        while(i+1<n){
            if((int)s[i]>(int)s[i+1]){
                 score+= (int)s[i]-(int)s[i+1];
            }
            else{
                 score+=(int)s[i+1]-(int)s[i] ;
            }
            i++;
        }
        return score;
    }
};
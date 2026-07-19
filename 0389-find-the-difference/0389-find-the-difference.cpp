class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans1=0 ;
        char ans2=0;
        for(char c: s){
            ans1 ^= c ;
        }
        for(char d : t){
            ans2 ^= d ;
        }
        return ans1^ans2;
    }
};
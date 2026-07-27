class Solution {
public:
    string reverseWords(string s) {
        for(int i=0; i<s.size() ; i++){
            int temp=i;
            while(i<s.size() && s[i] !=' '){
                    i++;
                }
            reverse(s.begin()+temp,s.begin()+i);
        }
        return s;
    }
};
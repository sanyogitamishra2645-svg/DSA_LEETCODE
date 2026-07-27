class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0 ;
        for(int i=0;i<sentences.size();i++){
            int space=0;
            for(char c: sentences[i]){
                if(c==' '){
                    space+=1;
                }
            }
            maxi=max(space+1,maxi);
        }
        return maxi;

    }
};
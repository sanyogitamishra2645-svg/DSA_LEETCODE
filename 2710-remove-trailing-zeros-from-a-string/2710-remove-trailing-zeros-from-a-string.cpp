class Solution {
public:
    string removeTrailingZeros(string num) {
        int j=num.size()-1;
        while(j>0){
            if(num[j]== '0'){
                num.pop_back();
                j--;
            }
            else{
                return num;
            }
        }
        return num;
    }
};
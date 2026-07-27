class Solution {
public:
    string removeTrailingZeros(string num) {
        while(num.size()>0){
            if(num[num.size()-1]== '0'){
                num.pop_back();
            }
            else{
                return num;
            }
        }
        return num;
    }
};
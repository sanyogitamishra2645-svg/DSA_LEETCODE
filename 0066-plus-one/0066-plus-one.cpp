class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() > 100){
            return digits;
        }
        else{
            int n=digits.size();
            
                if(digits[n-1]!=9){
                    digits[n-1] +=1 ;
                    return digits;
                }
                else{
                    
                    int i=n-1;
                    while(i>=0 && digits[i]==9){
                        digits[i]=0;
                        i-- ;
                    }
                    if(i>=0){
                        digits[i]+=1 ;
                        return digits ;
                    }
                    else{
                        digits.insert(digits.begin(),1);
                        return digits ;
                    }
                    
                }
            }
        }
};

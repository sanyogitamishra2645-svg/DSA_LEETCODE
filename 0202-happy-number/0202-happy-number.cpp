class Solution {
public:
    bool isHappy(int n) {
        if(n<=0) return false;
        int count=0;
        while(count != 1){
            while(n>0){
                count += (n%10)*(n%10);
                n=n/10;
            }
            if(count==4 || count==16 || count==37 || count==58 || count==89 || count==145 || count==42 ||count==20){
                return false;
            }
            else if(count==1){
                return true;
            }
            else{
                n=count;
                count=0;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        int count=n;
        while(count>0 || count!=1){
            if(count%2==0){
                count=count/2 ;
            }
            else{
                break;
            }
        }
        while(count>0 || count!=1){
            if(count%3==0){
                count=count/3;
            }
            else{
                break;
            }
        }
        while(count >0 || count!=1){
            if(count%5==0){
                count=count/5;
            }
            else{
                break;
            }
        }
        if(count==1) return true;
        else return false;
    }
};
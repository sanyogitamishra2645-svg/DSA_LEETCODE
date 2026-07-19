class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n==1) return true;

        if(n%4==0){
            bool ans = isPowerOfFour(n/4);
            return ans;
        }
        else{
            return false;
        }
    return isPowerOfFour(n/4);
    }
};
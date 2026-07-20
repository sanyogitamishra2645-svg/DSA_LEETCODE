class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans;
        if(n%2==0) return n;
        else{
            for(int i=1 ; i<(n*2) ; i++){
                if(i%2==0 && i%n==0){
                    ans=i;
                    break;
                }
            }
        }
        return ans;
    }
};
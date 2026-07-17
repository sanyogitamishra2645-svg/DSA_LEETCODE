class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int diff= (right -left)+1 ;
        vector<int>ans ;
        vector<int>num;
        for(int i=0 ; i < diff ; i++){
            int flag=0;
            int k=left;
            //to push all the digits into num
            while(k > 0){
                num.push_back(k % 10);
                k=k/10;
            }
            int s=num.size();
            for(int i=0 ; i<s ; i++){
                if(num[i]==0){
                    flag=1;
                    break;
                }
                else{
                    if(left%num[i]==0) continue;
                    else{
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0){
                ans.push_back(left);
            }
            left++;
            flag=0;
            num.clear();
        }
        return ans;
    }
};
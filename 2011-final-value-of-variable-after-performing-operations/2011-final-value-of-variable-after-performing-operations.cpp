class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        int num=operations.size();
        for(int i=0;i<num;i++){
            if(operations[i]=="--X"){
                X-=1;
            }
            else if(operations[i]=="X--"){
                X-=1;
            }
            else if(operations[i]=="X++"){
                X+=1;
            }
            else{
                X+=1;
            }
        }
        return X;
    }
};
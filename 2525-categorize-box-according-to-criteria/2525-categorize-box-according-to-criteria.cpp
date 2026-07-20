class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long v=long(length)*long(width)*long(height) ;
        string s;
        
        if(length>=1e4 || width >=1e4 || height >= 1e4 || v >=1e9){
            if(mass>=1e2){
                s="Both";
            }
            else{
                s="Bulky" ;
            }
        }
        else if(mass>=1e2){
            s="Heavy";
        }
        else{
            s="Neither";
        }
        return s;
    }
};
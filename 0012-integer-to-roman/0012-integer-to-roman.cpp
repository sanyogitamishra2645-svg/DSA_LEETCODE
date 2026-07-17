class Solution {
public:
    string intToRoman(int num) {
        vector<int> ans;

        while(num > 0){
            ans.push_back(num % 10);
            num /= 10;
        }

        int d = ans.size();

        for(int i = 0; i < d; i++){
            ans[i] *= (int)pow(10,i);
        }

        string s;

        for(int j = d-1; j >= 0; j--){

            // Thousands
            if(ans[j] >= 1000){
                int digit = ans[j]/1000;

                if(digit==1) s+="M";
                else if(digit==2) s+="MM";
                else if(digit==3) s+="MMM";

                continue;
            }

            // Hundreds
            if(ans[j] >=100){

                if(ans[j]==900){
                    s+="CM";
                    continue;
                }

                if(ans[j]==400){
                    s+="CD";
                    continue;
                }

                int digit=ans[j]/100;

                if(digit==1) s+="C";
                else if(digit==2) s+="CC";
                else if(digit==3) s+="CCC";
                else if(digit==5) s+="D";
                else if(digit==6) s+="DC";
                else if(digit==7) s+="DCC";
                else if(digit==8) s+="DCCC";

                continue;
            }

            // Tens
            if(ans[j]>=10){

                if(ans[j]==90){
                    s+="XC";
                    continue;
                }

                if(ans[j]==40){
                    s+="XL";
                    continue;
                }

                int digit=ans[j]/10;

                if(digit==1) s+="X";
                else if(digit==2) s+="XX";
                else if(digit==3) s+="XXX";
                else if(digit==5) s+="L";
                else if(digit==6) s+="LX";
                else if(digit==7) s+="LXX";
                else if(digit==8) s+="LXXX";

                continue;
            }

            // Ones
            if(ans[j]>=1){

                if(ans[j]==9){
                    s+="IX";
                    continue;
                }

                if(ans[j]==4){
                    s+="IV";
                    continue;
                }

                if(ans[j]==1) s+="I";
                else if(ans[j]==2) s+="II";
                else if(ans[j]==3) s+="III";
                else if(ans[j]==5) s+="V";
                else if(ans[j]==6) s+="VI";
                else if(ans[j]==7) s+="VII";
                else if(ans[j]==8) s+="VIII";
            }
        }

        return s;
    }
};
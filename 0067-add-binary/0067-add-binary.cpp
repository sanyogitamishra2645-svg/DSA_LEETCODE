class Solution {
public:
    string addBinary(string a, string b) {

        char carry='0';
        string ans;

        int n1=a.size();
        int n2=b.size();

        int mini=min(n1,n2);

        for(int i=0;i<mini;i++){

            if(a[n1-1-i]=='1' && b[n2-1-i]=='1' && carry=='1'){
                ans.insert(0,1,'1');
                carry='1';
            }

            else if(a[n1-1-i]=='1' && b[n2-1-i]=='1' && carry=='0'){
                ans.insert(0,1,'0');
                carry='1';
            }

            else if(a[n1-1-i]=='0' && b[n2-1-i]=='0' && carry=='1'){
                ans.insert(0,1,'1');
                carry='0';
            }

            else if(a[n1-1-i]=='0' && b[n2-1-i]=='0' && carry=='0'){
                ans.insert(0,1,'0');
                carry='0';
            }

            else if((a[n1-1-i]=='0' && b[n2-1-i]=='1' && carry=='1') ||
                    (a[n1-1-i]=='1' && b[n2-1-i]=='0' && carry=='1')){

                ans.insert(0,1,'0');
                carry='1';
            }

            else{
                ans.insert(0,1,'1');
                carry='0';
            }
        }

        if(n1>n2){

            for(int i=n1-mini-1;i>=0;i--){

                if(a[i]=='0' && carry=='0'){
                    ans.insert(0,1,'0');
                    carry='0';
                }

                else if((a[i]=='0' && carry=='1') ||
                        (a[i]=='1' && carry=='0')){

                    ans.insert(0,1,'1');
                    carry='0';
                }

                else{
                    ans.insert(0,1,'0');
                    carry='1';
                }
            }

        }

        else{

            for(int i=n2-mini-1;i>=0;i--){

                if(b[i]=='0' && carry=='0'){
                    ans.insert(0,1,'0');
                    carry='0';
                }

                else if((b[i]=='0' && carry=='1') ||
                        (b[i]=='1' && carry=='0')){

                    ans.insert(0,1,'1');
                    carry='0';
                }

                else{
                    ans.insert(0,1,'0');
                    carry='1';
                }
            }

        }

        if(carry=='1')
            ans.insert(0,1,'1');

        return ans;
    }
};
class Solution {
public:
    bool hasSameDigits(string s) {

        while(true){
            int sum=0;
            int n=s.length();
            string x="";
            for(int i=1;i<n;++i){
                int temp=(s[i-1]-48)+(s[i]-48);
                temp=temp%10;
                x+=to_string(temp);
            }
            s=x;
            if(s.length()<=2) {
                if(s[0]==s[1]||s=="0") return true;
                else return false;
            }

        }
        return false;
    }
};
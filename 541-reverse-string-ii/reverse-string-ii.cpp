class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        int i=0;
        if(n<k) {
            reverse(s.begin(),s.end());
            return s;
        }
        while(i<n){
            if((i+k)<n)
            reverse(s.begin()+i,s.begin()+k+i);
            else
            reverse(s.begin()+i,s.end());
            i=i+2*k;
        }
        return s;
    }
};
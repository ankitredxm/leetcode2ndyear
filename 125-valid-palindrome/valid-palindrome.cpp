class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char c:s){
            if(isalnum(c)!=0) ans+=c;
        }

        int lo=0;
        int hi=ans.length()-1;
      transform(ans.begin(),ans.end(),ans.begin(),::tolower);
        while(lo<hi){
            if(ans[lo]!=ans[hi]) return false;
            ++lo;
            --hi;
        }

        return true;
    }
};
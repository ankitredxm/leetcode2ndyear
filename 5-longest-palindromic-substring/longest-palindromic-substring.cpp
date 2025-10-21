class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        
        int lo,hi;
        if(n==1) return s;
       

string ans="";
int idxl=0;
int idxh=0;
int mx=-1;

for(int i=1;i<n;++i){
   
    lo=i-1;
    hi=i;
   
        while(lo>=0&&hi<=n-1){
            if(s[lo]==s[hi]){ 
               if(mx<(hi-lo+1)){ 
                idxl=lo;
               idxh=hi;
               mx=(hi-lo+1);
               }

               lo--;
               hi++;
            }
            else{
                break;
            }
            



        }
}

for(int i=1;i<n;++i){
   
    lo=i-1;
    hi=i+1;
   
        while(lo>=0&&hi<=n-1){
            if(s[lo]==s[hi]){ 
               if(mx<(hi-lo+1)){ 
                idxl=lo;
               idxh=hi;
               mx=(hi-lo+1);
               }

               lo--;
               hi++;
            }
            else{
                break;
            }
            



        }
}
  
        for(int i=idxl;i<=idxh;++i){
            ans+=s[i];
        }

        return ans;
    }
};
class Solution {
public:
    int bestClosingTime(string c) {
        int n=c.length();
        int prefix[n+1];
        int suffix[n+1];
prefix[0]=0;
        for(int i=1;i<=n;++i){
            if(c[i-1]=='N') prefix[i]=prefix[i-1]+1;
            else prefix[i]=prefix[i-1];

           
        }
     suffix[n]=0;
        for(int i=n-1;i>=0;--i){
          
            if(c[i]=='Y') suffix[i]=suffix[i+1]+1;
            else suffix[i]=suffix[i+1];

           
        }
      

      

        // find min
        int mn=INT_MAX;
        int idx=-1;
        for(int i=0;i<=n;++i){
          
            if(suffix[i]+prefix[i]<mn){
                idx=i;
                mn=suffix[i]+prefix[i];
            }
        }

        return idx;
        
    }
};
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        int k=n*n;
        int minc=0;
        int minr=0;
        int maxc=n-1;
        int maxr=n-1;
        n=1;
        while(1){
             // right
             if(n<=k){
             for(int i=minc;i<=maxc;++i){
                v[minr][i]=n;
                ++n;
             }
             ++minr;}
             else{
                break;
             }
              if(n<=k){
             for(int i=minr;i<=maxr;++i){
                v[i][maxc]=n;
                ++n;
             }
             --maxc;}
             else{
                break;
             }
              if(n<=k){
             for(int i=maxc;i>=minc;--i){
                v[maxr][i]=n;
                ++n;
             }
             --maxr;}
             else{
                break;
             }
              if(n<=k){
             for(int i=maxr;i>=minr;--i){
                v[i][minc]=n;
                ++n;
             }
             ++minc;}
             else{
                break;
             }

        }
        return v;
    }
};
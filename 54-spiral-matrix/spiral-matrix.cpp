class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int b=1;
        int a=0;
        vector<int> v;
        int m=matrix.size();
        int n=matrix[0].size();
        int minc=0;
        int minr=0;
        int maxc=n-1;
        int maxr=m-1;
         while(b>a){
       
        if(minc<=maxc&&minr<=maxr){
            for(int i=minc;i<=maxc;++i){
                v.push_back(matrix[minr][i]);
            }
            ++minr;
        }
        else{
            break;
        }
        if(minc<=maxc&&minr<=maxr){
            for(int i=minr;i<=maxr;++i){
                v.push_back(matrix[i][maxc]);
              
            }
            --maxc;
        }
        else{
            break;
        }
        if(minc<=maxc&&minr<=maxr){
            for(int i=maxc;i>=minc;--i){
               v.push_back(matrix[maxr][i]);
            }
            --maxr;
        }
        else{
            break;
        }
        if(minc<=maxc&&minr<=maxr){
            for(int i=maxr;i>=minr;--i){
                v.push_back(matrix[i][minc]);
            }
            ++minc;
        }
        else{
            break;
        }
       
    }
    return v;
    }
};
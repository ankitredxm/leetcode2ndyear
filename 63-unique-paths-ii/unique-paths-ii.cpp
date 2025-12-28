class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        
if(arr[0][0]==1||arr[m-1][n-1]==1) return 0;

           for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(arr[i][j]==1){
                    arr[i][j]=-1;
                }
                
            }
        }

   arr[0][0]=1;

        
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(arr[i][j]==-1) continue;
                int r=i-1;
                int c=j;
                if((r>=0&&c>=0)&&(arr[r][c]!=-1)) arr[i][j]+=arr[r][c];
                r=i;
                c=j-1;
                if((r>=0&&c>=0)&&(arr[r][c]!=-1)) arr[i][j]+=arr[r][c];

                if(arr[i][j]==0) arr[i][j]=-1;

                
              
            }
        }
return (arr[m-1][n-1]==-1)?0:arr[m-1][n-1];
    }
};
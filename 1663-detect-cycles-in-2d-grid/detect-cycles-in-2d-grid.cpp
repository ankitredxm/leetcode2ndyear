class Solution {
public:
vector<vector<int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
    bool containsCycle(vector<vector<char>>& grid) {
        // apply dfs
        int r=grid.size();
        int c=grid[0].size();
       
 vector<vector<bool>> vis(r,vector<bool>(c,false));
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                if(vis[i][j]==false){
                    if(dfs(grid,i,j,grid[i][j],-1,-1,vis)==true) return true;
                }
            }
        }

        return false;
    }

    bool dfs(vector<vector<char>>& grid,int i,int j,char g,int a,int b,vector<vector<bool>>& vis){
      
vis[i][j]=true;

       for(int k=0;k<4;++k){
        int n_r=i+dir[k][0];
        int n_c=j+dir[k][1];
        if(n_r>=0&&n_r<grid.size()&&n_c>=0&&n_c<grid[0].size()&&grid[n_r][n_c]==g){
            if(vis[n_r][n_c]==true&&n_r!=a&&n_c!=b) return true;
            if(vis[n_r][n_c]==false){
                if(dfs(grid,n_r,n_c,g,i,j,vis)==true) return true;
            }
        }
       }

       return false;
    }
};
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      if(color==image[sr][sc]) return image;
      
       int t=image[sr][sc];
       dfs(sr,sc,image,t,color);
        return image;
    }

    void dfs(int currow,int currcol,vector<vector<int>>& image,int t,int color){
        int r=image.size();
        int c=image[0].size();
        
        if(currow>=r||currcol>=c||currow<0||currcol<0||image[currow][currcol]!=t) return;
        image[currow][currcol]=color;


        dfs(currow-1,currcol,image,t,color);
        dfs(currow+1,currcol,image,t,color);
        dfs(currow,currcol+1,image,t,color);
        dfs(currow,currcol-1,image,t,color);

        
    }
};
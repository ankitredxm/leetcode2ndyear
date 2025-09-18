class Solution {
public:
// dsu
    struct edge {
        int val;
        int x;
        int y;
    };
    int find(vector<int>& par,int a){
        return par[a]=(par[a]==a)?a:find(par,par[a]);
    }
    int union_s(int a,int b,vector<int>& parent,vector<int>& rank){
        a=find(parent,a);
        b=find(parent,b);
        if(a==b) return false;
        if(rank[a]>=rank[b]){
            parent[b]=a;
            rank[a]++;
        }
        else{
            parent[a]=b;
            rank[b]++;
        }
        return true;
    }
    int kruskals(vector<edge>& p,int n) {
            vector<int> parent(n);
            for(int i=0;i<n;++i) parent[i]=i;
            vector<int> rank(n,0);

            int minwt=0;
            for(edge e:p){
                if(union_s(e.x,e.y,parent,rank)==false) continue;
                minwt+=e.val;
            }

            return minwt;



    }
 static   bool cmp(edge e1, edge e2) { 
        
        
        return e1.val<e2.val;
    
    }
     int minCostConnectPoints(vector<vector<int>>& points) {
        
        
        int n = points.size();
        vector<edge> v;
        for (int i = 0; i < n-1 ; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int wt =
                    abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                edge e;
                e.val = wt;
                e.x = i;
                e.y = j;
                v.push_back(e);
            }
        }

        sort(v.begin(),v.end(),cmp);
        return kruskals(v,n);
    }
};
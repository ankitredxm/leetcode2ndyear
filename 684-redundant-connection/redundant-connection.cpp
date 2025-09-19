class Solution {
public:
int find(int a,vector<int>& par){
    if(a==par[a]) return a;
    return par[a]=find(par[a],par);


}


bool union_s(int a,int b,vector<int>& par,vector<int>& rank){
    a=find(a,par);
    b=find(b,par);
    if(a==b) return false;
    if(rank[a]>=rank[b]){
        par[b]=a;
        rank[a]++;
    }

    else{
        par[a]=b;
        rank[b]++;
    }

    return true;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        //use of dsu
        int n=1001;
vector<int> par(n);
for(int i=0;i<n;++i) par[i]=i;
vector<int> rank(n,0);

        for(auto i:edges){
            if(union_s(i[0],i[1],par,rank)==false) return {i[0],i[1]};

        }
        return {-1,-1};
    }
};
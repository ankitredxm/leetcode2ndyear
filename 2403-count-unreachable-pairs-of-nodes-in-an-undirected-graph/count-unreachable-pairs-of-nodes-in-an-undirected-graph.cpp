class Solution {
public:
int find(int a,vector<int>& par){
    if(par[a]==a) return a;
    return par[a]=find(par[a],par);
}

void union_s(int a,int b,vector<int>& par,vector<int>& rank){
    a=find(a,par);
    b=find(b,par);
    if(rank[a]>=rank[b]){
        par[b]=a;
        rank[a]++;
    }
    else{
        par[a]=b;
        rank[b]++;
    }
}





    long long countPairs(int n, vector<vector<int>>& edges) {
       
        vector<int> parent(n);
        for(int i=0;i<n;++i) parent[i]=i;

        vector<int> rank(n,0);
        for(auto p:edges){
            union_s(p[0],p[1],parent,rank);    
                }

            unordered_map<int,int> mp;

                for(int i:parent) {
                    int temp=find(i,parent);
                    mp[temp]++;
                }
           

            if(mp.size()==1) return 0;
        

        long long ans = 0;
        long long tot = n;
        for (auto it : mp) {
            ans += 1LL * it.second * (tot - it.second);
        }
        return ans / 2;



    }
};
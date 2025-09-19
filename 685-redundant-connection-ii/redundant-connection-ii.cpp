class Solution {
public:
    int find(int a, vector<int>& par) {
        if (a == par[a])
            return a;
        return par[a] = find(par[a], par);
    }

    bool union_s(int a, int b, vector<int>& par, vector<int>& rank) {
        a = find(a, par);
        b = find(b, par);
        if (a == b)
            return false;
        if (rank[a] >= rank[b]) {
            par[b] = a;
            rank[a]++;
        }

        else {
            par[a] = b;
            rank[b]++;
        }

        return true;
    }
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> par(n + 1, 0), canda, candb;
        vector<int> rank(n + 1, 0);

        for (auto &edge : edges) {
            if (par[edge[1]] == 0) {
                par[edge[1]] = edge[0];
            } else {
                canda = {par[edge[1]], edge[1]};
                candb = edge;
               
                edge[1] = 0; // ignore the edge
            }
        }

        

        vector<int> parent(n + 1);
        for (int i = 1; i <= n; ++i)
            parent[i] = i;

        for (auto e : edges) {
            if (e[1] != 0) {
              
                if (union_s(e[0], e[1], parent, rank) == false) {
                    if(candb.size()==0) return {e[0],e[1]};
                    return canda;
                }
            }
        }

        return candb;
    }
};
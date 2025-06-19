class Solution {
public:
void dfs(int node, unordered_set<int>& v,vector<vector<int>>& rooms){
    v.insert(node);
    for(auto n:rooms[node]){
        if(v.count(n)==0){
            dfs(n,v,rooms);
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // dfs
       unordered_set<int> v;
        dfs(0,v,rooms);
        return v.size()==rooms.size();
    }
};
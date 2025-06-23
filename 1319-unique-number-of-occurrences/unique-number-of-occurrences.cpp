class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int t:arr){
            ++m[t];
        }
        for(auto p:m){
            if(s.find(p.second)!=s.end()) return false;
            s.insert(p.second);
        }
        return true;
    }
};
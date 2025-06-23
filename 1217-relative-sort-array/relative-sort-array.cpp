class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<arr1.size();++i) ++m[arr1[i]];
        for(int i:arr2){
            while(m[i]!=0){
                v.push_back(i);
                --m[i];
            }
        }
        for(auto p:m){
            if(p.second!=0){
                
         while(p.second!=0){
                v.push_back(p.first);
                --p.second;
            }
        }
        
        }
        return v;
    }
};


class Solution {
public:

    string reverseWords(string s) {
        vector<string> v;
       
       stringstream ss(s);
while(ss>>s){
    v.push_back((s));
}
reverse(v.begin(),v.end());
string ans="";
for(int i=0;i<v.size()-1;++i){
   string d=v[i];
    ans+=d+" ";
}
ans+=v[v.size()-1];


        return ans;
    }
};
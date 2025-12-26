class Solution {
public:
void help(vector<string>& ans,int o,int c,int n,string str){
    if(o==n&&c==n){
        ans.push_back(str);
    }
    if(c>o||o>n) return;
   


    help(ans,o+1,c,n,str+"(");
    help(ans,o,c+1,n,str+")");
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str="";
        help(ans,0,0,n,str);
        return ans;
    }
};
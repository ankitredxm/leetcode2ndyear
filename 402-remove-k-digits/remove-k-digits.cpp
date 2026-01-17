class Solution {
public:
void lund(string& k){
    int id=0;
    for(char c:k){
        if(c!='0') break;
        ++id;
    }
   k= k.substr(id);
}
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n=num.size();
        st.push(num[0]);
        
        for(int i=1;i<n;++i){
            while(!st.empty()&&k!=0&&st.top()>num[i]){ st.pop();
                 --k;
                
            }
           
            st.push(num[i]);
        }
string ans="";
        if(k==0){
            while(!st.empty()){
            ans+=st.top();
            st.pop();
            }


        }
        else{
            while(!st.empty()&&k!=0){
                st.pop();
                --k;
            }
 while(!st.empty()){
            ans+=st.top();
            st.pop();
            }


        }

        reverse(ans.begin(),ans.end());
       lund(ans);
        return ans==""?"0":ans;
    }
};
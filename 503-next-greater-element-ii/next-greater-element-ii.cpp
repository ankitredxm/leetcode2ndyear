class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
         stack<int> st;
    int n=arr.size();
         for(int i=n-1;i>=0;--i) st.push(arr[i]);
   


 
   
for(int i=n-1;i>=0;--i){
  int t=arr[i];
while(st.size()>0&&st.top()<=arr[i]) st.pop();
if(st.empty()) arr[i]=-1;
else
arr[i]=st.top();
st.push(t);
}

  

return arr;
    }
};
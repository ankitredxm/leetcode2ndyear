class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size();
        int n1=nums1.size();
        stack<int> st;
        unordered_map<int,int> mp;
        st.push(nums2[n2-1]);
        mp[nums2[n2-1]]=-1;
        
        for(int i=n2-1;i>=0;--i){
           
            while(st.size()>0&&st.top()<=nums2[i]) st.pop();
            if(st.size()==0) mp[nums2[i]]=-1;
            else {
                mp[nums2[i]]=st.top();
            }

            st.push(nums2[i]);
        }
int k=0;
        for(int i:nums1){
            nums1[k++]=mp[i];
        }

        return nums1;

    }
};
class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
           int n=nums.size();
        int cnt=0;
        cnt+=n;
// all single element is centered subarray
        // take the sum of subarrays
       int sum;
        for(int i=0;i<n;++i){
            sum=0;
            unordered_set<int> st;
            for(int j=i;j<n;++j){
                sum+=nums[j];
                st.insert(nums[j]);
               
               if(i==j) continue;
                if(st.count(sum)==1){ 
                   
                    ++cnt;
                     // st.erase(sum);
                                    }
            }
        }

        return cnt;
    }
};
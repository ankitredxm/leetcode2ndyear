class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        int prefix[n];
        prefix[0]=nums[0];
        for(int i=1;i<n;++i){
            prefix[i]=prefix[i-1]+nums[i];
        }
       
        vector<int> v;
        int k=0;
        int i=0;
        int q=queries.size();
       for(int i=0;i<q;++i){
        int temp=queries[i];
        bool t=true;
        for(int i=0;i<n;++i){
            if(prefix[i]>temp){
                v.push_back(i);
                t=false;
                break;
            }
        }
        if(t==true) v.push_back(n);
       }
       

        return v;
    }
};
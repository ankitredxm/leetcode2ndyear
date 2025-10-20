class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
                if(count==0) cand=nums[i];
                if(cand==nums[i]) ++count;
                else --count;
        }

        return cand;


    }
};
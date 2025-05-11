class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int lo=0;
        int hi=nums.size()-1;
        
        vector<int> v(2,-1);
        if(nums.size()==1){
            if(t==nums[lo]) return {0,0};
            return v;
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==t){
                hi=mid-1;
                v[0]=mid;
            }
            else if(nums[mid]<t){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        lo=0;
        hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
             if(nums[mid]==t){
                lo=mid+1;
                v[1]=mid;
            }
            else if(nums[mid]<t){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        
        }
        return v;
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
           if(nums[mid]==t) return mid;
        else if(nums[mid]<t) lo=mid+1;
        else hi=mid-1;
        }
        return lo;
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0;
        int hi=nums.size()-1;
        if(nums[lo]<nums[hi]) return nums[lo];
        if(lo==hi) return nums[lo];
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
           if(nums[mid]<nums[0]){
            hi=mid;

           }
else{
    lo=mid+1;
}
        }
        return nums[lo];
    }
};
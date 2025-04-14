class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int lo=0;
        int hi=nums.size()-1;
        int f=-1,l=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==t){
                if(mid!=0&&nums[mid-1]==t){
                        hi=mid-1;
                }
                else{
                    f=mid;
                    break;
                }
                
            }
           if(nums[mid]<t) lo=mid+1;
           if(nums[mid]>t) hi=mid-1;
        }

 lo=0;
         hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==t){
                if(mid!=nums.size()-1&&nums[mid+1]==t){
                        lo=mid+1;
                }
                else{
                    l=mid;
                    break;
                }
                
            }
           if(nums[mid]<t) lo=mid+1;
           if(nums[mid]>t) hi=mid-1;
        }


        return {f,l};
    }
};
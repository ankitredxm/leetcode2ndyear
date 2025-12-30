class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int l=0,r=2;
        int pd=nums[1]-nums[0];
        int ans=0;
        while(r<n){
            int diff=nums[r]-nums[r-1];
            if(diff==pd) 
            ans+=(r-l-1);
            else{
                l=r-1;
               
                
            }
            ++r;
            pd=diff;


        }

        return ans;
    }
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long res=0;

        if(nums.size()<3) return nums;
        for(int i:nums){
            res=res^i;
        }
      int st=res;
       res=res&(-res);
   
            int ans=0;
            for(int i:nums){
                    if((res&i)>0){
                        cout<<i<<" ";
                        ans=ans^i;
                    }
            }


        return {ans,ans^st};
    }
};
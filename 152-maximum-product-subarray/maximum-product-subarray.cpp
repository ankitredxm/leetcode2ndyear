class Solution {
public:

    int maxProduct(vector<int>& nums) {
      int cp=1;
      int maxm=nums[0];
      int n=nums.size();
      for(int i=0;i<n;++i){
        cp=cp*nums[i];
        maxm=max(maxm,cp);
        if(cp==0) cp=1;
      }


      cp=1;
      
      for(int i=n-1;i>=0;--i){
         cp=cp*nums[i];
        maxm=max(maxm,cp);
        if(cp==0) cp=1;
      }

      return maxm;
        
    }
};
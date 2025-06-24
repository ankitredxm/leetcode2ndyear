class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int y:nums){
            ++m[y];
        }
      int s=nums.size();
      int i=0;
        int k=m[0];
        while(k--){
            nums[i]=0;++i;
        }
           k=m[1];
        while(k--){
            nums[i]=1;++i;
        }
           k=m[2];
        while(k--){
            nums[i]=2;++i;
        }
        
      
    }
};
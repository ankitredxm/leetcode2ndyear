class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(int i:nums){
            if(i==val)++count;
        }

        int i=0;
        while(i<nums.size()-count){
            int an=nums[i];
            if(an==val){
                int k=i+1;
                cout<<"done";
                while(nums[k]==val) ++k;
                cout<<endl<<k;
                swap(nums[i],nums[k]);
                
            } 
            ++i;
        }

        return nums.size()-count;
    }
};
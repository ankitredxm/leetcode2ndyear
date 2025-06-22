class Solution {
public:
int rev(int x){
    int s=0;
    while(x>0){
        s=s*10+x%10;
        x/=10;
    }
    return s;
}
    int countNicePairs(vector<int>& nums) {
        map<int,int> m;
     int c=0;
     for(int i=0;i<nums.size();++i){
        nums[i]=nums[i]-rev(nums[i]);
        ++m[nums[i]];
if(m[nums[i]]>1){
    c=c%1000000007;
    c+=m[nums[i]]-1;
}
     }
    
    return c%1000000007;
    }
};
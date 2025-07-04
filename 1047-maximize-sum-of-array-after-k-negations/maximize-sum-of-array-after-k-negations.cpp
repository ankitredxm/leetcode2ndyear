class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
          priority_queue<int,vector<int>,greater<int> > pq(nums.begin(),nums.end());
         int sum=0;
         int n=nums.size();
        for(int i=0;i<n;++i){
            sum+=nums[i];
        }
       
        while(k>0){
            int el=pq.top();
            
            if(el==0) break;
           
            if(el<0){
                el=-el;
                sum=sum+2*el;
            }
            
           else if(el>0){
                
                if(k%2!=0){
                    sum=sum-2*el;
                }
                break;
            }
         
            --k;
            pq.pop();
            pq.push(el);
        }
        return sum;
    }
};
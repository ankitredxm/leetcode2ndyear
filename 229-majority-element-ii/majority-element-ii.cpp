class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
            int canda;
            int candb;
            int cnta=0;
            int cntb=0;
            if(n<=2){ 
                if(n==2){
                    if(nums[0]==nums[1]) return {nums[0]};
                }
                
                return nums;


            }            
                 vector<int> ans;

            for(int i=0;i<n;++i){
                if(cnta==0&&candb!=nums[i]) canda=nums[i];
                else if(cntb==0&&canda!=nums[i]) candb=nums[i];

                if(nums[i]==canda) cnta++;
                if(nums[i]==candb&&canda!=candb) cntb++;

                if(nums[i]!=canda&&nums[i]!=candb) {
                    --cnta;
                    --cntb;
                }
cout<<canda<<" "<<candb;
            }
            int c=n/3;
            cnta=0;
            cntb=0;
            for(int i:nums){
                if(canda==i) ++cnta;
                else if(candb==i) ++cntb;
            }

            if(cnta>c) ans.push_back(canda);
            if(cntb>c) ans.push_back(candb);
            return ans;
    }
};
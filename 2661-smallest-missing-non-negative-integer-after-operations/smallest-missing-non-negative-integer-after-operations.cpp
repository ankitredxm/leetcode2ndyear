class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
       unordered_map<int,int> mp;
       for(int i:nums){
            if(i<0){
                mp[(i%value+value)%value]++;
            }
            else{
                mp[i%value]++;
            }
       }
       int k=0;
      while(true){
            if(mp.find(k%value)!=mp.end()&&mp[k%value]!=0){
                mp[k%value]--;
            }
            else return k;

            ++k;
      }
       return -1;
    }
};
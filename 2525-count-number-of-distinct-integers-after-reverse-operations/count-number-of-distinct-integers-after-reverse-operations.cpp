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
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for(int d:nums){
          s.insert(d);
          s.insert(rev(d));
        }
        return s.size();
    }
};
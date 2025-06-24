class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
      int lo=0;
      int hi=n.size()-1;
      while(lo<hi){
        if(n[lo]+n[hi]==t) return {lo+1,hi+1};
        if(n[lo]+n[hi]>t) --hi;
        if(n[lo]+n[hi]<t) ++lo;
      }
      return {-1,-1};
    }
};
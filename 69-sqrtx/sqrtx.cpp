class Solution {
public:
    int mySqrt(int x) {
        int lo=1;
        int hi=x;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if((long long)mid*mid==x)
            {
                return mid;
            }
            else if((long long)mid*mid>x)
            {
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return hi;
    }
};
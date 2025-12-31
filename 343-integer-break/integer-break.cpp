class Solution {
public:
    int integerBreak(int n) {
        if(n==1||n==2) return 1;
        if(n==3) return 2;

        int t=n%3;
        if(t==0) return pow(3,n/3);
        if(t==2) return pow(3,n/3)*2;
        else {
            n=n-4;
            int p=n/3;
            return pow(3,p)*4;
        }

        return -1;
    }
};
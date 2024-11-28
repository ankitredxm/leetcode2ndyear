class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int sum=0,n=x;
        while(x>0){
            int temp=x%10;
            sum=sum*10+temp;
            x/=10;
        }
        if(sum-n==0)return true;
        return false;
    }
};
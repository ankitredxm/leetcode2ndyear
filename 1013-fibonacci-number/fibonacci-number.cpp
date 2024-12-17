class Solution {
public:

int fibo(vector<int>& v,int n)
{
    if(n<=1)return n;
    if(v[n]==-1)
  v[n]=fibo(v,n-1)+fibo(v,n-2);
    return v[n];
}
    int fib(int n) {
       vector<int> v(n+1,-1);
       return fibo(v,n);

    }
};
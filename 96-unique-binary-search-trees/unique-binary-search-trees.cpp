class Solution {
public:
int f(int n){
    if(n==1||n==0) return 1;
    // if(n==3) return 5;
    if(n==2) return 2;
    int s=0;
    for(int i=1;i<=n;++i){
        s+=f(abs(1-i))*f(n-i);
    }

    return s;
}
    int numTrees(int n) {
        return f(n);
    }
};
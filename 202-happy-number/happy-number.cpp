class Solution {
public:
    bool isHappy(int n) {
        int temp=n;
        unordered_set<int> st;
        while(true){
      
        int sum=0;
        while(temp>0){
                sum=sum+(temp%10)*(temp%10);
                temp/=10;
        }
        if(st.count(sum)==1) return false;
        if(sum==1) return true;
        st.insert(sum);
        temp=sum;

        }

        return false;
    }
};
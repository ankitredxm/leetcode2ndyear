class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> a;
map<int,int> m;
for(int x:digits){
    ++m[x];
}
       
        int flag;
        for (int i = 100; i <= 999; ++i) {
            map<int,int> r;
            if (i % 2 == 0) {
                int x = i;
                flag = 0;
                while (x > 0) {
                    int t = x % 10;
                   ++r[t];
                   if(r[t]>m[t]){
                    flag=1;
                    break;
                   }
                    x /= 10;
                }
                if (flag == 0)
                    a.push_back(i);
            }
        }

        return a;
    }
};
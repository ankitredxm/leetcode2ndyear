class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        map<char,int> p;

        for(auto x:s){
            ++m[x];
        }
        for(auto x:t){
           ++p[x];
        }
        for(auto x:s){
        if(m[x]!=p[x]) return false;
        }
          for(auto x:t){
        if(m[x]!=p[x]) return false;
        }

        return true;

    }
};
class Solution {
public:
string rev(string s){
    string a="";
    int x=s.length();
  for(int i=x-1;i>=0;--i){
    a+=s[i];
  }
  return a;
}
    int maximumNumberOfStringPairs(vector<string>& words) {int c=0;
        for(int i=0;i<words.size();++i){
            for(int j=(i+1);j<words.size();++j){
                if(rev(words[i])==words[j]) ++c;
            }
        }
        return c;
    }
};
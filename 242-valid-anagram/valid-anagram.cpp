class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            map<char, int> m;
            if (s.length() != t.length())return false;

         for(int i=0;i<s.length();++i){
            m[s[i]]++;
            m[t[i]]--;
            if(m[t[i]]==0){
                m.erase(t[i]);
            }
            if(m[s[i]]==0) m.erase(s[i]);
         }

            return m.size()==0;
        }
};
class Solution {
public:
bool vowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}
    string reverseVowels(string s) {
        int lo=0;
        int hi=s.length()-1;
        while(lo<hi){
            if(vowel(s[lo])&&vowel(s[hi])) swap(s[lo++],s[hi--]);
            else if(vowel(s[lo])==false) ++lo;
            else --hi;
        }
        return s;
    }
};
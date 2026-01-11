class Solution {
public:
    long long countPairs(vector<string>& words) {
            int n=words.size();
        unordered_map<string,int> mp;
        for(int i=0;i<n;++i){
            string curr=words[i];
            string s="";
            int no='z'-curr[0];
            // cout<<no<<endl;
            for(char c:curr){
                char x='a'+(c-'a'+no)%26;
                
                s+=to_string(x);
            }
            // cout<<s<<endl;
            mp[s]++;
            
        }
long long sum=0;
        for(auto& t:mp){
            long long k=t.second;
            sum+=(k*(k-1))/2;
        }

        return sum;
    }
};
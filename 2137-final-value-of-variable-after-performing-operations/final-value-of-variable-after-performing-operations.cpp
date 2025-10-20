class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int x=0;
        for(string i:op){
            if(i=="--X"||i=="X--") --x;
            else if(i=="X++"||i=="++X") ++x;
    
        }
        return x;
    }
};
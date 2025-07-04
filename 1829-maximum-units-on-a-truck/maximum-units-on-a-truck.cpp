class Solution {
public:
static bool cmp(vector<int> a,vector<int> b){
    return a[1]>b[1];
}
    int maximumUnits(vector<vector<int>>& arr, int truckSize) {

        sort(arr.begin(),arr.end(),cmp);
        int m=0;
    for(auto k:arr){
            if(k[0]<=truckSize){
                m+=k[0]*k[1];
                truckSize-=k[0];
            }
            else{
                
                m+=truckSize*k[1];
                break;
            }
    }
    return m;
    }
};
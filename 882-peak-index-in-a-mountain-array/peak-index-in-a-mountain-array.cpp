class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     int lo=0;
     int hi=arr.size()-1;
     while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1]) hi=mid;
        else lo=mid+1;
     }   
     return lo;
    }
};
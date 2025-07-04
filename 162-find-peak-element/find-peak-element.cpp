class Solution {
public:
    int findPeakElement(vector<int>& arr) {
          int n=arr.size()-1;
        int hi=n;
        if(n==0) return n;
        if(arr[0]>arr[1]) return 0;
        if(arr[n]>arr[n-1]) return n;
        
        int lo=0;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) return mid;
            if(arr[mid]<arr[mid+1]) lo=mid;
            else hi=mid;
        }
        return -1;
    }
};
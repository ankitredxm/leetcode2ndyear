class Solution {
public:
    int search(vector<int>& arr, int target) {
        int lo=0;
        int hi=arr.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==target) return mid;
          if(arr[mid]>=arr[lo]&&arr[hi]<arr[mid]){
            if(target<arr[mid]&&target>=arr[lo]) hi=mid-1;
            else lo=mid+1;
          }
          else{
            if(target>arr[mid]&&target<=arr[hi]) lo=mid+1;
            else hi=mid-1;
          }
        }
        return -1;
    }
};
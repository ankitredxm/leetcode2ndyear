class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int lo=0;
        int hi=arr.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==target) return true;
             else if(arr[mid]==arr[lo]&&arr[mid]==arr[hi]){
++lo;
--hi;

            }
            else if(arr[mid]>=arr[lo]||arr[mid]>arr[hi]){
                if(target>=arr[lo]&&arr[mid]>target) hi=mid-1;
                else lo=mid+1;
            }
           
            else{
                if(target>arr[mid]&&target<=arr[hi])lo=mid+1;
                else hi=mid-1;
            }
        }
        return false;
    }
};
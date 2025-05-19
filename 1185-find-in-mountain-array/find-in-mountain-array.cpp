/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        // find the peak
        int lo=0;
        int hi=mountainArr.length()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)) lo=mid+1;
            else hi=mid;
        }
        
int peak=lo;
 lo=0;
while(lo<=peak){
    int mid=lo+(peak-lo)/2;
    if(mountainArr.get(mid)==target) return mid;
    else if(mountainArr.get(mid)>target)peak=mid-1;
    else lo=mid+1;
    }
    lo=peak+1;
     hi=mountainArr.length()-1;
    while(lo<=hi){
    int mid=(lo)+(hi-lo)/2;
    if(mountainArr.get(mid)==target) return mid;
    else if(mountainArr.get(mid)>target)lo=mid+1;
    else hi=mid-1;}

return -1;
    }
};
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lp=1,rp=arr.size()-2,mid;
        while(lp<=rp){
            mid=lp+(rp-lp)/2;
            cout<<mid<<" ";
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid]>arr[mid-1]){
                lp=mid+1;
            }
            else{
                rp=mid-1;
            }
        }
        return lp;
    }
};
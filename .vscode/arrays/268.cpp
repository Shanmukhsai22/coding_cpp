class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int t=(n*(n+1))/2;
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }

        return t-s;
    }
};
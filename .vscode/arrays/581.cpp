class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v(nums);
        int l=0,h=0;
        sort(v.begin(),v.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=v[i]){
                l=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=v[i]){
                h=i+1;
                break;
            }
        }
        return h-l;
    }
};
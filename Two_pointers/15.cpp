class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        int lp,rp;
        for(int i=0;i<nums.size()-2;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            lp=i+1,rp=nums.size()-1;
            while(lp<rp){
                if(nums[i]+nums[lp]+nums[rp]==0){
                    v.push_back({nums[i],nums[lp],nums[rp]});
                    while (lp < rp && nums[lp] == nums[lp + 1]) lp++;
                    while (lp < rp && nums[rp] == nums[rp - 1]) rp--;
                }
                if(nums[i]+nums[lp]+nums[rp]>0){
                    rp--;
                }
                else{
                    lp++;
                }
            }
        }
        return v;
    }
};
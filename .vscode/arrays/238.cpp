class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1,cz=0,pz=1;
        for(auto it : nums){
            p=p*it;
            if(it==0){
                cz++;
            }
        }
        if(cz>0){
            for(auto it : nums){
                if(it==0){
                 continue;
                }
                pz=pz*it;
            }
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(cz>1){
                  ans.push_back(0);
                }
                else{
                   ans.push_back(pz);
                }
            }
            else{
                ans.push_back(p/nums[i]);
            }
        }
        return ans;
    }
};
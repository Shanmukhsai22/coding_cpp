class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int res;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto it : nums){
            if(mp[it]==1){
                res=it;
            }
        }
        return res;
    }
};
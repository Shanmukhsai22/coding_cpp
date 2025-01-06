class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int s=nums.size();
       unordered_map<int,int>mp;
       for(auto it : nums){
          mp[it]++;
       }
       vector<int>v;
       for(int i=1;i<=s;i++){
         if(mp[i]==0){
            v.push_back(i);
         }
       }
       return v;
    }
};
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_map<int,int>mp;
       int mpi=INT_MIN,s=0,res=0;
       for(auto it : nums){
            mp[it]++;
            if(it>0 && it>mpi){
                mpi=it;
            }    
       }
       cout<<mpi;
       for(int i=1;i<mpi;i++){
            if(mp[i]==0){
                res=i;
                break;
            }
       }
       if(res==0){
            res=mpi+1;
       }
       if(mpi==INT_MIN){
            res=1;
       }
       return res;
    }
};
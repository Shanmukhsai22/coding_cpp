class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX;
        int lp,rp,s=0,d,sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            lp=i+1;
            rp=nums.size()-1;
            while(lp<rp){
                s=nums[i]+nums[lp]+nums[rp];
                d=abs(target-s);
                if(d<diff){
                    diff=d;
                    sum=s;
                }
                if(s<target){
                    lp++;
                }
                else{
                    rp--;
                }
            }
        }
        return sum;
    }
};
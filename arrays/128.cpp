class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        for(auto it : nums){
            s.insert(it);
        }
        int c=0,res=0;
        vector<int>v;
        for(auto it : s){
            v.push_back(it);
        }
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]-v[i]==1){
                c++;
               // cout<<c<<" ";
            }
            else{
                if(res<c){
                    res=c;
                }
                c=0;
            }
        }
        //cout<<s.size()<<" "<<c;
        if(c==s.size()-1){
            res=c+1;
            return res;
        }
        if(c>res){
            res=c;
        }
        return res+1;
    }
};
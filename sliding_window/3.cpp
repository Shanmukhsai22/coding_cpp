class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int window=0,res=0,ind=0;
        for(auto it : s){
            mp[it]++;
            window++;
            while(mp[it]>1){
                res=max(window-1,res);
                cout<<it<<" "<<window<<" "<<res<<" ";
                // if(it==s[ind]){
                //     mp[it]--;
                // }
                mp[s[ind]]--;
                ind++;
                window--;
            }
            res=max(res,window);
        }
        if(res==0){
            res=window;
        }
        return res;
    }
};
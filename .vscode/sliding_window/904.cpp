class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       unordered_map<int,int>mp;
       int lp=0,total=0,res=0;
       for(auto it : fruits){     //following greedy approach sliding window
            mp[it]++;
            total++;    //this is temp window size
            while(mp.size()>2){
                int f=fruits[lp];
                mp[f]--;      //shrining the window size accoring to the conditions
                total--;
                lp++;         //moving the pointer
                if(mp[f]==0){
                    mp.erase(f);
                }
            }
            res=max(total,res); //final window size
       }
       return res;
    }
};
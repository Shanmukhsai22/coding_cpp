class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
       pair<int,char>p;
       for(auto it:s){
            mp[it]++;
       }
       string t;
       priority_queue<pair<int,char>>pq;
       for(auto it : s){
            if(mp[it]!=0){
                p.first=mp[it];
                p.second=it;
                pq.push(p);
                mp[it]=0;
            }
       }
       while(!pq.empty()){
            int k=pq.top().first;
            for(int i=0;i<k;i++){
                t+=pq.top().second;
            }
            pq.pop();
       }

       return t;
    }
};
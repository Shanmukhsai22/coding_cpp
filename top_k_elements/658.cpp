class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        pair<int,int>p;
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto it : arr){
           int y=abs(x-it);
           p.first=y;
           p.second=it;
           pq.push(p);
        }
        vector<int>v;
        for(int i=0;i<k;i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};
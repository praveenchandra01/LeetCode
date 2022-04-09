class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        map<int,int> mp;
     
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>> pq;
        for(auto m : mp ){
            pq.push({m.second, m.first});
        }
        
        while(k--){
            v.push_back(pq.top().second);
                pq.pop();
        }
        
        return v;
    }
};
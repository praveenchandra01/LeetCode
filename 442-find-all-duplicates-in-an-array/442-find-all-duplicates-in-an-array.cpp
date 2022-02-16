class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> s;
        vector<int> v;
        for(auto i : nums){
            if(s.find(i)!=s.end()){
                v.push_back(i);
            }
            s.insert(i);
        }
        return v;
    }
};
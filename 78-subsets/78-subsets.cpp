class Solution {
private:
    void power_set(vector<int> nums,int i,vector<int> s, vector<vector<int>> &p)  {
        if(i>=nums.size()){
            p.push_back(s);
            return;
        }
        // exclude
        power_set(nums,i+1,s,p);
        
        // include
        s.push_back(nums[i]);
        power_set(nums,i+1,s,p);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerset;
        vector<int> s;
        power_set(nums,0,s,powerset);
        return powerset;
    }
};
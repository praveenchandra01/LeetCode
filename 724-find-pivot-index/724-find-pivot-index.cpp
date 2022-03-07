class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_Sum=0;
        for(int i=0; i<nums.size();i++){
            total_Sum+=nums[i];
        }
        int left_Sum=0;
        for(int i=0;i<nums.size();i++){
            if(total_Sum - left_Sum - nums[i] == left_Sum)
            return i;
            left_Sum+=nums[i];
        }
        return -1;
    }
};
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j] && i%2==0 && j%2==0)
                    swap (nums[i],nums[j]);
              
                
                else if(nums[i]<nums[j] && i%2!=0 && j%2!=0)
                    swap (nums[i],nums[j]);
            }
        }
        return nums;
    }
};
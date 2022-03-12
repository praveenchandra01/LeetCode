class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        int n =nums.size();
        for(int i=0;i<n;i++){
            int x=(i+k)%n;
            temp[x] = nums[i];
        }
        nums=temp;
    
      // while(k--){
      //     int last = nums[nums.size()-1];  
      //   for(int i=nums.size()-1;i>=0;i--){
      //       nums[i]=nums[i-1];
      //       nums[0]=last;
      //       }
      //   }
    }
};
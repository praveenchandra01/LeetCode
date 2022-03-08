class Solution {
    
    int get_pivot(vector<int>& nums){
        int start=0,end=nums.size()-1,mid=0;
        while(start<end){
            mid= start + (end-start)/2;
            if(nums[mid]>=nums[0])
                start = mid+1;
            else end=mid;
        }
        return start;
    }
    
    int binary_search(vector<int> nums, int start, int end, int target){
        while(start<=end){
           int mid = start + (end-start)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) start = mid+1;
            else end=mid-1;
        }
        return -1;
    }
    
public:
    int search(vector<int>& nums, int target) {
        int pivot = get_pivot(nums);
        int n=nums.size()-1;
        if(target>=nums[pivot] && target<=nums[n])
            return binary_search(nums, pivot, n,target);
        else 
             return binary_search(nums, 0, pivot-1, target);
    }
};
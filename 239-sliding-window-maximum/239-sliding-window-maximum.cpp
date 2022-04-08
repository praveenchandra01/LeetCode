class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int i=0,j=0;
    list<int> l;
    vector<int> v;

    if(nums.size()==1){
      v.push_back(1);  
     return v;
    }

    while(j<nums.size()){

        while(l.size()>0 && l.back()<nums[j]) l.pop_back();
        l.push_back(nums[j]);

        if(j-i+1 < k) j++;

        else if(j-i+1 == k){
            v.push_back(l.front());
            if(l.front()==nums[i]) l.pop_front();
            i++;j++;
        }
    }
    return v;
    }
};
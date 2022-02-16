class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0,n=nums1.size(),m=nums2.size();
        unordered_set<int> s;
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                if(s.find(nums1[i])==s.end()){
                    s.insert(nums1[i]);
                }
            i++;j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j])
               j++;
            }
         vector<int> v;
        for(int i : s){
            v.push_back(i);
        }
        return v;
    }
    

};
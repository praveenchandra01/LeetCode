class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int row=m.size();
        int col=m[0].size();
        
        int s=0;
        int e=row*col-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            int elem=m[mid/col][mid%col];
            if(elem == target) return 1;
            else if(elem < target) s=mid+1;
            else e=mid-1;
        }
        return 0;
    }
};
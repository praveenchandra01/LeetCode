class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int i=m.size();
        int j=m[0].size();
        
        int rowIndex=0;
        int colIndex=j-1;
        
        while(rowIndex<i && colIndex>=0){
            int elem = m[rowIndex][colIndex];
            if(elem==target) return 1;
            else if(elem<target) rowIndex++;
            else colIndex--;
        }
        return 0;
    }
};
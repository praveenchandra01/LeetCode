class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row_size = mat.size();
        int col_size = mat[0].size(); 
        int sum=0;
        for(int i=0;i<row_size;i++){
            for(int j=0;j<col_size;j++){
                if(i==j || ( i+j==row_size-1 ))
                    sum=sum+mat[i][j];
            }
        }
        return sum;
    }
};
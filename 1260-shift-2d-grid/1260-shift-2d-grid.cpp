class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> v(n,vector<int>(m));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int newJ = (j+k)%m;
                int newI = (i+(j+k)/m)%n;
               v[newI][newJ]=grid[i][j];
            }
        }
        return v;
    }
};
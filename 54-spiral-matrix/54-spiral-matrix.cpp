class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int row=matrix.size();
        int col=matrix[0].size();
        int total = row*col;
        int count=0;
        
        int rowStarting=0;
        int rowEnding=row-1;
        int colStarting=0;
        int colEnding=col-1;
        
        while(count<total){
            
            //starting row
            for(int i=colStarting; count<total && i<=colEnding;i++){
                v.push_back(matrix[rowStarting][i]);
                count++;
            }rowStarting++;
            
            //ending col
            for(int i=rowStarting; count<total && i<=rowEnding;i++){
                v.push_back(matrix[i][colEnding]);
                count++;
            }colEnding--;
            
            //ending row
            for(int i=colEnding; count<total && i>=colStarting;i--){
                v.push_back(matrix[rowEnding][i]);
                count++;
            }rowEnding--;
            
            //first col
            for(int i=rowEnding; count<total && i>=rowStarting;i--){
                v.push_back(matrix[i][colStarting]);
                count++;
            }colStarting++;
        }
        return v;
    }
};
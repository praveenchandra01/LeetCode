class Solution {
public:
    int maxArea(vector<int>& H) {
        int i=0,j=H.size()-1,maxi=INT_MIN;
        long long int res;
        while(i<j){
            if(H[i]<H[j]){
                res=H[i] * (j-i);
                i++;
            }
            else {
                res = H[j] * (j-i);
                j--;
            }
            maxi=maxi>res?maxi:res;
        }
        return maxi;
    }
};
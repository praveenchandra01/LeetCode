class Solution {
public:
    int maxArea(vector<int>& H) {
        int max = 0, i = 0, j = H.size()-1, res = 0;
        
        while (i < j) { // left pointer should be less than right.
            
            if (H[i] <= H[j]) { // if left value less than or eqaul to right, then enters.
                res = H[i] * (j - i);
                i++;
            } else {
                res = H[j] * (j - i);
                j--;
            }
            
            // checking existing max value with current result.
            if (res > max) max = res;
        }
        return max;
    }
};
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=0;
        for (int i=0; i<31;i++ ){
            ans=pow(2,i);
            if(ans == n){
                return 1;
            }
        }
        return 0;
    }
};
class Solution {
public:
    
    int binary_search(int n){
        long long int s=0,e=n,m=0,ans=-1;
        while(s<=e){
            m = s + (e-s)/2;
            long long int sqr = m*m;
            if(sqr==n) return m;
            else if(sqr >n) e=m-1;
            else {
                ans = m;
                s = m+1;
            }
        }
        return ans;
    }
    
    int mySqrt(int x) {
        return binary_search(x);  
    }
};
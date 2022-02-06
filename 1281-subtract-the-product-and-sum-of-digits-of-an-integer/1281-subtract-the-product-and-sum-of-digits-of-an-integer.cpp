class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1; int sum=0;
        int r,diff=0;
        while(n){
            r=n%10;
            product*=r;
            sum+=r;
            n/=10;
        }
        diff=product-sum;
        return diff;
    }
};
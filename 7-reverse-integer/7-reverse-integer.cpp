class Solution {
public:
    int reverse(int x) {
        int r=0,a=0;
        while(x!=0){
            r=x%10;
            if((a>INT_MAX/10)||(a<INT_MIN/10)){
                return 0;
            }
            a=a*10+r;
            x=x/10;
        }
        return a;
    }
};
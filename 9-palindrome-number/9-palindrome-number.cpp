class Solution {
public:
    bool isPalindrome(int x) {
        long long int n=x;
        long long int res=0;
        if(x<0) return false;
        while(n!=0){
            int r = n%10;
            res =res*10+r;
            n=n/10;
        }
        if(res==x) return true;
        else return false;
    }
};
class Solution {
public:
    int removePalindromeSub(string s) {
     string s2=s;
     reverse(s2.begin(),s2.end());
     return (s==s2 ? 1 : 2);
    }
};
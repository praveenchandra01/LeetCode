class Solution {
public:
    bool detectCapitalUse(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z') count++;
        }
        return (count==s.length() || count == 0 ||  count == 1 && isupper(s[0]));
    }
};
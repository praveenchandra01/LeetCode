class Solution {
public:
    bool checkString(string s) {
        int b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b')
                b=1;
            if(s[i]=='a' && b) return false;
        }
        return true;
    }
};
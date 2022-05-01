class Solution {
public:
    bool isAnagram(string s, string t) {
        int h1[26]={0};
        int h2[26]={0};
        int l1 = s.length();
        int l2 = t.length();
        if(l1 != l2) return false;
        else {

            for(int i=0;i<l1;i++){
                int v1 = s[i]-'a';
                int v2 = t[i]-'a';
                h1[v1]++;
                h2[v2]++;
            }
        }
        for(int i=0;i<26;i++){
            if(h1[i]!=h2[i]) return false;
        }
        return true;
    }
};
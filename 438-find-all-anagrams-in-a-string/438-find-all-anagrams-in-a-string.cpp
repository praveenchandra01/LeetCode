class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int lp=p.length();
    
        vector<int> p_hash(26,0);
        vector<int> hash(26,0);
        
        if(s.size() < p.size()) return {};
        
        for(int i=0;i<lp;i++){
            p_hash[p[i]-'a']++;
            hash[s[i]-'a']++;
        }
        if(p_hash == hash) ans.push_back(0);
        
        for(int i=lp;i<s.length();i++){
            hash[s[i-lp]-'a']--;
            hash[s[i]-'a']++;
            if(p_hash == hash) ans.push_back(i-lp+1);
        }
        return ans;
    }
};
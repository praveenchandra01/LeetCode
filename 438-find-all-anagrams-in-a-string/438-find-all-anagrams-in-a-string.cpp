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
    
//     vector<int> findAnagrams(string s, string p) {
//         int s_len = s.length();
//         int p_len = p.length();
        
//         if(s.size() < p.size()) return {};
        
//         vector<int> freq_p(26,0);
//         vector<int> window(26,0);
        
//         //first window
//         for(int i=0;i<p_len;i++){
//             freq_p[p[i]-'a']++;
//             window[s[i]-'a']++;
//         }
        
//         vector<int> ans;
//         if(freq_p == window) ans.push_back(0);
        
//         for(int i=p_len;i<s_len;i++){
//             window[s[i-p_len] - 'a']--;
//             window[s[i] - 'a']++;
            
//             if(freq_p == window) ans.push_back(i-p_len+1);
//         }
//         return ans;
//     }
};
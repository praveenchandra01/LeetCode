class Solution {
public:
    int minimumRecolors(string s, int k) {
    int ans =0;
    int count =0;
        
    for(int i=0;i<k;i++){
        if(s[i]=='W') count++;
    }
    ans = count;
    for(int i=k;i<s.length();i++){
        
         if(s[i-k]=='W') count--;
        if(s[i]=='W') count++;
      
        ans= min(ans, count);
     }
    return ans;
    }
};
class Solution {
public:
    string toLowerCase(string s) {
        string res = "";
        for(auto i : s){
         if(i>='A' && i<='Z')  res+=(i-'A'+'a');
         else res+=i;  
    }
        return res;
    }
};
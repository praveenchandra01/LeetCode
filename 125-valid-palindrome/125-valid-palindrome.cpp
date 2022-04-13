class Solution {
public:
    char tolower(char ch){
        if(ch>='a' && ch<='z' || ch>='0' && ch<='9') return ch;
        else return ch-'A'+'a';
    }
    char is_valid(char ch){
        if(ch>='a' && ch<='z' || ch>='0' && ch<='9' || ch>='A' && ch<='Z')              return true;
        else return false;
    }
    
    bool isPalindrome(string s) {
        int st=0;
        int e=s.length()-1;
        while(st<=e){
            if(!is_valid(s[st])){
                st++;
                continue;
            }
             if(!is_valid(s[e])){
                e--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[e])) return false;
             st++;e--;
        }
        return true;
    }
};
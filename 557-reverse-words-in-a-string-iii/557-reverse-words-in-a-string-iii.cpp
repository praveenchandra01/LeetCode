class Solution {
public:
    string reverseWords(string s) {
        string str;
        vector<string> v;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                str+=s[i];
            }
            else{
               
                reverse(str.begin(), str.end());
                v.push_back(str);
                str.clear();
            }
        }
        reverse(str.begin(), str.end());
        v.push_back(str);
    
        int x = v.size(); 
        int a=1;
        string temp;
        for(auto i : v){
            temp+=i;
            if(a!=x)
            temp+=' ';
            a++;
        }
        return temp;
    }
};
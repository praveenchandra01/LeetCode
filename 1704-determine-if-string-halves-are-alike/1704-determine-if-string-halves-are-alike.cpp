class Solution {
public: 
      bool halvesAreAlike(string s) {
        vector<char> v{'a','e','i','o','u','A','E','I','O','U'};
        int x=0,y=0,m=s.size()/2;
        for(int i=0;i<m;i++){
          if(find(v.begin(),v.end(),s[i])!=v.end())x++;  
        }

        for(int i=m;i<s.size();i++){
           if(find(v.begin(),v.end(),s[i])!=v.end())y++;
        }
        return x==y;
    }
};
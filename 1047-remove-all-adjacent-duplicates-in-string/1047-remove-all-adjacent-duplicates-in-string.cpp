class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> stk; 
        for(auto ch : s){
            if(!stk.empty() && stk.top()==ch) stk.pop();
            else stk.push(ch);
        }
        string newString = "";
        while(!stk.empty())
        {
            // newString += stk.top();
            char temp=stk.top();
            newString.push_back(temp);
            stk.pop();
        }
        reverse(newString.begin(), newString.end());
        
        
        
    //     int i=0;
    //     while(i<s.length()){
    //        if(s[i]==s[i+1]){
    //            s.erase(i,2);
    //            i=0;
    //            continue;
    //        }
    //         i++;
    //     } 
        return newString;
    }
};
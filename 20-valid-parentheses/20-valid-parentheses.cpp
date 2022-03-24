class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char i: s){
            if(i=='(' || i=='{' || i=='[') st.push(i);
            else{
                if(!st.empty()){
                    char ch = st.top();
                    if( (i==')' && ch=='(') ||
                        (i=='}' && ch=='{') || 
                        (i==']' && ch=='[') ) 
                        st.pop();
                    else return false;
            }else return false;
        }
    }
        if(st.empty()) return true;
        else return false;
    }
};
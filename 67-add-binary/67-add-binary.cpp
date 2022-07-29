class Solution {
public:
    string addBinary(string a, string b) {
        
        string s="";
        int i = a.length()-1;
        int j = b.length()-1;
        
        
        int sum=0;
        int carry=0;
        
        while(i>=0 || j>=0 || carry){
            
            sum=carry;
           
            if(i>=0){
                sum += a[i]-'0';
                i--;
            }
            if(j>=0){
                sum += b[j]-'0';
                j--;
            }
            
            carry = (sum>1)?1:0;
            sum=sum%2;
            cout<<sum;
            s+=to_string(sum);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
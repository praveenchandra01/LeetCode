// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    map<char, int> mp;
    int i=0,j=0;

     int res=-1;
    
    while(j<s.length()){
        mp[s[j]]++;
        if(mp.size()<k)j++;
        else if(mp.size()==k){
            res=max(res,j-i+1);
            j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k){mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);
            i++;
            }
            j++;
        }
    }
    return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends
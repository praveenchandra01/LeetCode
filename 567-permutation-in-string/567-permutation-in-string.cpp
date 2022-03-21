class Solution {
public:
    bool same(int a[],int b[]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    }
    
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        
        int i=0;
        int window_size=s1.length();
        int count2[26]={0};
        while(i<window_size && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(same(count1,count2)) return 1;
        
        while(i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            
            
            int old_char=s2[i-window_size]-'a';
            count2[old_char]--;
            
            i++;
            if(same(count1,count2)) return 1;
        }
        return 0;
    }     
};
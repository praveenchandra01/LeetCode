class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        bitset<32> a(n);
        int i=0,j=31;
        while(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;j--;
        }

        return a.to_ulong();
    }
};
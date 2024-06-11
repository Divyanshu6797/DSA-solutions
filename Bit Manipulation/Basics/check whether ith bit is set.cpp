class Solution
{
    public:
    
    bool checkUsingLeftShift(int n, int k) {
        int temp = 1 << k;
        return temp & n;
        
    }
    
    bool checkUsingRightShift(int n, int k) {
        int bit = n >> k;
        return bit & 1;
        
        
    }
    
    bool checkKthBit(int n, int k)
    {
        return checkUsingLeftShift(n,k);
        // return checkUsingRightShift(n,k);
    }
};

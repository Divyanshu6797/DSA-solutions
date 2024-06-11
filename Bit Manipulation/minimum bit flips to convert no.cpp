class Solution {
public:
    int minBitFlips(int start, int goal) {
        start = start ^ goal;

        int count = 0;
        while(start) {
            count++;
            start &= start-1;       // setting rightmost bit as 1
        }

        return count;
        
    }
};

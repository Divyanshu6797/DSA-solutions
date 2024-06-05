class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        for(int i=0;i<n;i++) {
            capacity[i] = capacity[i] - rocks[i];
        }
        int count = 0;
        sort(capacity.begin(), capacity.end());

        for(int i= 0;i < n ; i++) {
           if(capacity[i] > additionalRocks) {
            break;
           }
           else if(additionalRocks > 0) {
            additionalRocks -= capacity[i];
            count++;
           }
           else {
            break;
           }
        
        }
        return count;

        
        
    }
};

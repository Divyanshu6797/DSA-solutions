class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int i = 0;
        long long ans = 0;
        while(1) {
            
            int spent = (cost1 * i);
            if(total < spent ) {
                break;
            }
            ans += (total-spent)/cost2 + 1;

            i++;

        }

        return ans;
        
    }
};














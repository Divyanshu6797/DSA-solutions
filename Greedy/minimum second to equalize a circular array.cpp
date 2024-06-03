
class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int n = nums.size();
        map<int, vector<int>> m;

        
        for(int i = 0; i < n; i++) {
            m[nums[i]].push_back(i);
        }     

        int ans = INT_MAX;

        for(auto& it : m) {
            vector<int>& positions = it.second;
            int max_gap = 0;
            int size = positions.size();

            // Calculate maximum gap between consecutive positions
            for(int i = 0; i < size; i++) {
                int gap = (i == size - 1) ? positions[0] + n - positions[i] - 1 : positions[i + 1] - positions[i] - 1;
                max_gap = max(max_gap, gap);
            }

            // Update the minimum seconds needed
            ans = min(ans, (max_gap + 1) / 2);
        }

        return ans;
    }
};

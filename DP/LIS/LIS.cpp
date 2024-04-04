class Solution {
public:
    int helper(int index,vector<int> &nums , int prev, vector<vector<int>> &dp) {
        if(index==nums.size()) {
            return 0;
        }
        if(dp[index][prev+1]!=-1) return dp[index][prev+1];
        
        int skip = helper(index+1, nums, prev,dp);
        int take =0;
        if(prev == -1 || nums[prev] < nums[index]){
            take = 1 + helper(index+1, nums, index, dp);
        }
        return dp[index][prev+1] = max(take,skip);
        
    } 
    int lengthOfLIS(vector<int>& nums) {
        
        int n= nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1,-1));
        return helper(0, nums,-1, dp);

        
        
    }
};
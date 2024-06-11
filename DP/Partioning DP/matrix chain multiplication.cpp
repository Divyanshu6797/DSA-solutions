//memoization
class Solution{
public:

    int solve(int i,int j,int arr[], vector<vector<int>> &dp) {
        if(i==j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int mini = 1e9;
        for(int k = i; k<j ; k++) {
            int res = arr[i-1]*arr[k]*arr[j] + solve(i,k,arr,dp) + solve(k+1,j,arr,dp);
            if(res < mini) {
                mini = res;
            }
            
            
        }
        return dp[i][j]=mini;
        
        }
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N,vector<int>(N,-1));
        return solve(1,N-1,arr,dp);
    }
};


//Tabulation

class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N,vector<int>(N,0));
        
        for(int i = N-1 ; i>=1 ;i--) {
            for(int j = i+1; j<N ; j++) {
                int mini = 1e9;
                for(int  k = i; k<j;k++) {
                    int res = arr[i-1]*arr[k]*arr[j] + dp[k+1][j] + dp[i][k];
                    if(res < mini) {
                        mini = res;
                    }
                    
                    
                }
                dp[i][j]=mini;
            }
        }
        return dp[1][N-1];
    }
};

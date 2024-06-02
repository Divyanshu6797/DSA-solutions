class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {

        int n = reward1.size();
        

        if(k>n) {
            return -1;
        }
        int ans = accumulate(reward2.begin(),reward2.end(),0);
        for(int i = 0;i < n;i++) {
            reward1[i] = reward1[i] - reward2[i];

        }
        cout<<ans;
        sort(reward1.begin(),reward1.end(),greater<int>());
        for(int i = 0 ;i < k ;i++) {
            
            ans = ans + reward1[i];
        }
        return ans;
        
    }
};








// idea :  make mouse 2 eat everything then iterate k times in new sorted array (difference array)

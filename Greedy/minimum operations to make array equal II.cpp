class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        if(k==0) {
            return nums1 == nums2 ? 0 : -1;
        }
        long long diff = 0;
        long long count = 0;
        
        int n= nums1.size();

        for(int i=0;i<n;i++) {
            int currdiff = nums2[i] - nums1[i];
            if(currdiff % k) {
                return -1;
            }
            else {
                if(currdiff>0) {
                    count += (currdiff/k);
                }
                diff += currdiff;
                
            }
        }
        if(diff == 0) {
            return count;
        }
        return -1;
        
    }
};








//idea : if currdiff in each iteration is not dicisible by k its nit possible. also if sum of curr diff == 0 then its possible. 

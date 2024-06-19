// TC -> O(n)  as unordered map is used here
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> m;

        for(int i=0;i<n;i++) {
           
            int temp = target - nums[i];
            if(m.find(temp)!=m.end() && i != m[temp]) {
                vector<int> ans;
                ans.push_back(i);
                ans.push_back(m[temp]);
                return ans;
                // return {i,m[temp]};
            }
             m[nums[i]] = i;
        }
        

        return {-1,-1};
        
    }
};

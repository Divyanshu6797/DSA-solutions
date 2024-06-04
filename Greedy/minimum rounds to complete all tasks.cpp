class Solution {
public:
    int minimumRounds(vector<int>& tasks) {

        unordered_map<int,int> m;
        for(auto it: tasks) {
            m[it]++;
        }
        int ans = 0;
        for(auto it : m) {
            int count = it.second;
            if(count == 1) {
                return -1;
            }
            ans += (count+2)/3;
        }

        return ans;
        
    }
};


















// idea: understand the pattern
  // 1 - notpossible 
  // 2 - 1
  // 3 - 1

  // 4 - 2
  // 5 - 2
  // 6 - 3

  // 7 - 4
  // 8 - 5
  // 9 - 6
  

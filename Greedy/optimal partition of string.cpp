class Solution {
public:
    int partitionString(string s) {
        vector<int> hashmap(26,0);
        int n = s.size();

        int count = 1;

        for(int i=0;i<n;i++) {
            char temp = s[i];
            hashmap[temp-'a']++;

            if(hashmap[temp-'a'] == 2) {
                count ++;
                fill(hashmap.begin(), hashmap.end(),0);
                hashmap[temp-'a']++;
                
            }


        }
        return count;
        
    }
};

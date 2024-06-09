class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        unordered_map<char,int> m;
        for (int i = 0; i < n ;i++) {
            char ch = s[i];
            int lastindex = s.find_last_of(ch);
            
            m[ch] = lastindex;
            cout<<lastindex;

        }
        int size = 0;
        int end = 0;
        vector<int> ans;
        for(int i = 0 ;i < n ;i++) {
            char ch = s[i];
            size++;
            end = max(end,m[ch]);
            if(i == end) {
                ans.push_back(size);
                size = 0;
            }
            
            
        }
        return ans;


    }
};

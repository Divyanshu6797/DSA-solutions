class Solution {
public:
    bool isPalindrome(string s, int i, int j) {
        while(i<=j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
    void backtrack(int i, string s, vector<string> curr, vector<vector<string>> & ans) {
        if(i==s.size()) {
            ans.push_back(curr);
        }

        for(int idx = i; idx<s.size(); idx++) {
            if(isPalindrome(s,i,idx)) {
                curr.push_back(s.substr(i, idx-i+1));
                backtrack(idx+1,s,curr, ans);
                curr.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>  ans;
        vector<string> curr;

        backtrack(0,s,curr, ans);
        return ans;

        
    }
};

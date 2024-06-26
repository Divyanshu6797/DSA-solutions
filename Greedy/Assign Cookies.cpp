class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int noChildren = g.size();
        int noCookie = s.size();

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int i = 0;
        int j = 0;
        int count = 0;
        while(i<noChildren && j<noCookie) {
            if(g[i] <= s[j]) {
                count++;
                i++;
                j++;
            }
            else {
                j++;
                
            }

        }
        return count;
        
    }
};

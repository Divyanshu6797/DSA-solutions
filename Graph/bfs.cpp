// see the part where nodes are made visited
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> ans;
        vector<int> vis(V,0);    
        queue<int> q;
        q.push(0);
        vis[0] = 1;
    
        while(!q.empty()) {
           int node = q.front();
           ans.push_back(node);
           q.pop();
           
            for(auto it : adj[node]) {
                if(vis[it]==0) {
                    q.push(it);
                    vis[it] = 1;
                }
            }
            
        }
        return ans;
    }
};

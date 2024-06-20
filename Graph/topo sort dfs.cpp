// why this part  " ans.push_back(node);" at last of function
class Solution
{
	public:
	
	void topoDfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ans) {
	    vis[node] = 1;
	    
	    for(auto adjNode: adj[node]) {
	        if(!vis[adjNode]) {
	            topoDfs(adjNode, adj,vis, ans);
	        }
	    }
	    ans.push_back(node);
	    
	    
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> vis(V, 0);
	    vector<int> ans;
	    
	    for(int i=0;i<V;i++) {
	        if(!vis[i]) {
	            topoDfs(i,adj,vis,ans);
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	    
	    
	    
	}
};

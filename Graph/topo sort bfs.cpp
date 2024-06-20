class Solution
{
	public:
	

	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> vis(V,0);
	    vector<int> inDegree(V,0);
	    
	    for(int i=0;i<V;i++) {
	        for(auto it : adj[i]) {
	            inDegree[it]++;
	        }
	    }
	    vector<int> ans;
	    queue<int> q;
	    
	    // find element with 0 indegree to start toposort
	    for(int i = 0;i<V;i++) {
	        if(inDegree[i] == 0) {
	            q.push(i);
	            
	        }
	    }
	    
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        
	        for(auto adjNode:adj[node]) {
	            inDegree[adjNode]--;
	            if(inDegree[adjNode] == 0) {
	                q.push(adjNode);
	            }
	        }
	        
	        
	    }
	    return ans;
	}
};

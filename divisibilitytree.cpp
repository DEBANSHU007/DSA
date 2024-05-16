class Solution {
public:
	int help(vector<int> adj[],vector<int> &vis,int &ans,int node){
        vis[node]=1;
        int size=1;
        for(int x:adj[node]){
            if(!vis[x]){
                int temp = help(adj,vis,ans,x);
                size+=temp;
                if(temp%2==0)ans++;
            }
        }
        return size;
    }
	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int> adj[n+1];
	    for(auto x:edges){
	        adj[x[0]].push_back(x[1]);
	        adj[x[1]].push_back(x[0]);
	    }
	    vector<int> vis(n+1,0);
	    int ans=0;
	    for(int i=1;i<=n;i++){
	        if(!vis[i]){
	            help(adj,vis,ans,i);
	        }
	    }
	    return ans;
	}
};
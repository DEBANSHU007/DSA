class Solution {
  public:
  
   void dfs(int n,vector<int>adj[],vector<bool>&vi,unordered_set<int>&st){
        vi[n]=true;
        st.insert(n);
        for(int i:adj[n]){
            if(!vi[i]){
                dfs(i,adj,vi,st);
            }
        }
    }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        vector<int>adj[v+1];
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int c=0;
        vector<bool> visited(v+1,0);
        for(int i=1;i<=v;i++){
            if(!visited[i]){
                unordered_set<int>st;
                dfs(i,adj,visited,st);
                bool f=1;
                for(int n:st){
                    if(adj[n].size()!=st.size()-1){
                        f=0;
                        break;
                    }
                }
                if(f)c++;
            }
        }

        return c;
    }
};
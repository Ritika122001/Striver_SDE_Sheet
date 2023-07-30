
bool checkForCycle(int node, int parent, vector < int > & vis, vector<vector<int>>&adj)
{

   vis[node] = 1;
   for(auto it : adj[node])
   {
       if(!vis[it])
       {
           if(checkForCycle(it, node, vis, adj)) return true;
       }

       else if(it!= parent)
       {
           return true;
       }
   }

   return false;



}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    vector < int > vis(n + 1, 0);
      for (int i = 0; i < n; i++) {
        if (!vis[i]) {
          if (checkForCycle(i, -1, vis, adj)) return "Yes";
        }
      }

      return "No";


}

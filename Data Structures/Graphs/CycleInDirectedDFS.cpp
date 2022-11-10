//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

private:
    bool dfs(int node, vector<bool> &vis, vector<bool> &pathVis, vector<int> adj[])
    {
        vis[node] = true;
        pathVis[node] = true;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (dfs(it, vis, pathVis, adj) == true)
                {
                    return true;
                }
            }
            else if (pathVis[it])
            {
                return true;
            }
        }
        pathVis[node] = false;
        return false;
    }

public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[])
    {
        // code here
        vector<bool> vis(V, false);
        vector<bool> pathVis(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (dfs(i, vis, pathVis, adj) == true)
                {
                    return true;
                }
            }
        }

        return false;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
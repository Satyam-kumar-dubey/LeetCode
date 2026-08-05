class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& arr)
    {
        vector<vector<int>> adj(n);
        vector<int> in(n, 0);
        vector<bool> vis(n, false);

        for (auto &it : arr)
        {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            in[v]++;
        }

        queue<int> q;
        q.push(k);
        vis[k] = true;

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            for (int v : adj[u])
            {
                in[v]--;
                if (!vis[v])
                {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (vis[i] && in[i] > 0)
            {
                ans.resize(n);
                iota(ans.begin(), ans.end(), 0);
                return ans;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            ans.push_back(i);
        }

        return ans;
    }
};
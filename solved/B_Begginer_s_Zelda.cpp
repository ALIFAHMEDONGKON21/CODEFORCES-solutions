#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
vector<int> adj[N];
bool visited[N];

pair<int, int> dfs(int u) {
    visited[u] = true;
    int diameter = 0;
    int farthest = u;

    for (int v : adj[u]) {
        if (!visited[v]) {
            auto [dist, far] = dfs(v);
            if (dist + 1 > diameter) {
                diameter = dist + 1;
                farthest = far;
            }
        }
    }

    return {diameter, farthest};
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
            visited[i] = false;
        }

        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int start = 1;
        auto [_, farthest1] = dfs(start);

        // Reset visited array
        for (int i = 1; i <= n; ++i) {
            visited[i] = false;
        }

        auto [diameter, farthest2] = dfs(farthest1);

       
        cout << diameter / 2 + diameter % 2 << endl;
    }

    return 0;
}

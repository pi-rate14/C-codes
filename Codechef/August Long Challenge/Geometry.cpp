#include<bits/stdc++.h>
using namespace::std;
#define For(i,i1,i2) for(int i=(int)i1;i<=(int)i2;i++)
#define Rof(i,i1,i2) for(int i=(int)i1;i<=(int)i2;i++)
#define ll long long int
#define NMAX 900005
#define pii pair<int,int>
#define xx first
#define yy second
#define mp make_pair
#define pb push_back

const int INF = 2 * NMAX;
int N, a[NMAX], b[NMAX];

struct Dinic {
    vector<int> adj[NMAX], cap[NMAX], cid[NMAX];
    queue<int> Q;
    int n, _ne, S, E;
    int flow[8 * NMAX], ptr[NMAX], d[NMAX];

    void adde(int u, int v, int capa) {
        adj[u].push_back(v);
        cap[u].push_back(capa);
        cid[u].push_back(_ne);
        _ne++;

        adj[v].push_back(u);
        cap[v].push_back(capa);
        cid[v].push_back(_ne);
        flow[_ne] = capa;
        _ne++;
    }

    void init(int _n) {
        n = _n;
        _ne = 0;
        For(i, 1, n) {
            adj[i].clear();
            cap[i].clear();
            cid[i].clear();
        }
    }

    int avail(int u, int i) {
        int id = cid[u][i];
        int re = cap[u][i] - flow[id];
        return re;
    }

    int bfs() {
        fill(d, d + n - 1, -1);
        while (!Q.empty())
            Q.pop();
        d[S] = 0;
        Q.push(S);
        while (!Q.empty()) {
            int u = Q.front();
            Q.pop();
            For(i, 0, adj[u].size() - 1) {
                int v = adj[u][i];
                if (d[v] != -1)
                    continue;
                if (avail(u, i) == 0)
                    continue;
                d[v] = d[u] + 1;
                Q.push(v);
            }
        }
        return (d[E] != -1);
    }

    int dfs(int u, int minf) {
        if (minf == 0)
            return 0;
        if (u == E)
            return minf;
        For(i, ptr[u], adj[u].size() - 1) {
            ptr[u]++;
            int v = adj[u][i];
            if (d[u] + 1 != d[v])
                continue;
            if (avail(u, i) == 0)
                continue;
            int f1 = dfs(v, min(minf, avail(u, i)));
            if (f1) {
                int id = cid[u][i];
                flow[id] += f1;
                flow[id ^ 1] -= f1;
                return f1;
            }
        }
        return 0;
    }

    int max_flow(int _S, int _E) {
        S = _S;
        E = _E;
        int maxf = 0;
        while (1) {
            if (!bfs())
                break;
            fill(ptr, ptr + n + 1, 0);
            while (int flowing = dfs(S, INF))
                maxf += flowing;
        }
        return maxf;
    }
}dinic;
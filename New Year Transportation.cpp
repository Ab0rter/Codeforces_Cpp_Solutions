#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

void solve()
{
    ll n, g;
    cin >> n >> g;

    vector<vector<ll>> adj(n, vector<ll>());
    for(ll i = 0; i+1<n; i++)
    {
        ll b;
        cin >> b;
        adj[i].push_back(i+b);
    }

    vector<bool> vis(n, false);
    queue<ll> q;
    q.push(0);
    vis[0] = true;
    while(!q.empty())
    {
        ll f = q.front();
        q.pop();
        for(ll u : adj[f])
        {
            if(!vis[u])
            {
                vis[u] = true;
                q.push(u);
            }
        }
    }

    if(vis[g-1]) printf("YES");
    else printf("NO");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        solve();
    }
}

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

const int MAXN = 1e5;

long long int solve(long long int N, long long int A[])
{
    long long int ans = 1, max_here = 1, prev = A[0];

    for(int i = 1; i < N; i++)
    {
        if(A[i] > prev)
        {
            max_here++;
        }
        else
        {
            ans = max(ans, max_here);
            max_here = 1;
        }

        prev = A[i];
    }

    ans = max(ans, max_here);

    return ans;
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
        long long int n, arr[MAXN];

        cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];

        printf("%lld\n", solve(n, arr));
    }
}

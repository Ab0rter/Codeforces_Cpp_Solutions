#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n],prefsum[n];
    memset(prefsum,0,n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);

    if(n == 1)
    {
        printf("%d",n);
        return;
    }
    
    prefsum[0] = arr[0];
    for(int i =1; i < n; i++)
    {
        prefsum[i] = prefsum[i-1]+arr[i];
    }


    int sum = arr[n-1],ans = 1, i = n-2;
    while(sum <= prefsum[i])
    {
        sum+=arr[i];
        ans++;
        --i;
    }

    printf("%d",ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        solve();
        printf("\n");
    }
}

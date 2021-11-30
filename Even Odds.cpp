#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    long long n,k,ans;
    cin >> n >> k;


    if(n & 1){
        if(k <= ((n+1)/2)) //odd case
        {
            ans = 1+2*(k-1);
        }
        else //even case
        {
            ans = 2+2*((k-((n+1)/2))-1);
        }
    }
    else
    {
        if(k <= (n/2)) //odd case
        {
            ans = 1+2*(k-1);
        }
        else //even case
        {
            ans = 2+2*((k-(n/2))-1);
        }
    }

    cout << ans;
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
        //printf("\n");
        cout << "\n";
    }
}

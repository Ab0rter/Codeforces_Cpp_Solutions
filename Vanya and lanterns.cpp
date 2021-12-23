#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, l, ans;
    cin >> n >> l;
    int a[n];
 
    for (int i = 0; i < n; i++) cin >> a[i];
 
    sort(a, a + n);
    ans = max(a[0], l - a[n - 1]) * 2;
 
    for (int i = 0; i < n - 1; i++) ans = max(ans, a[i + 1] - a[i]);
 
    cout.precision(20);
    cout << fixed << a / 2.0 << endl;
    return 0;
}

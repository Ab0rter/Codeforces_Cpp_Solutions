#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n],b[n],c[n],best;
 
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
 
    for(int i = 0; i < n; i++)
    {
        if((a[i] == 1 && b[i] == 1) || (a[i] == 1 && c[i] == 1) || (c[i] == 1 && b[i] == 1))
            best += 1;
        else continue;
    }
 
    printf("%d",best);
}

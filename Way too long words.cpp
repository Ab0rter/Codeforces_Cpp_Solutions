#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
 
string solve(string& s)
{
    string res;
    int n = (int)s.size();
 
    res += s[0];
    int i_temp = n-2;
    string temp = to_string(i_temp);
    res += temp;
    res += s[n-1];
    return res;
}
 
int main()
{
    int n;
    cin >> n;
    vector<string> vect;
 
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vect.push_back(s);
    }
 
    for(int i = 0; i < n; i++)
    {
        if(vect[i].size() > 10)
            vect[i] = solve(vect[i]);
        else continue;
 
    }
 
    for(auto s : vect)
        cout << s << "\n";
}

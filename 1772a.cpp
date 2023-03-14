#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a=int(s[0]),b=int(s[2]);
        cout<<a+b-96<<endl;
    }
    return 0;
}
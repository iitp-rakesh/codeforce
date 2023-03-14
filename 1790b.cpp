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
        int n,s,r;
        cin >> n >> s >> r;
        int a[n];
        a[0]=s-r;
        int x=r/(n-1);
        for(int i = 1; i < n; i++)
        {
            a[i]=x;
        }
        int y=r%(n-1);
        for(int i = 1; i <= y; i++){
            a[i]++;
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
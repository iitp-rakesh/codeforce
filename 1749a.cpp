#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[m][2];
        map<int, int> x;
        map<int, int> b;
        int flag = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i][0] >> a[i][1];
            if (x.find(a[i][0]) != x.end())
            {
                flag = 1;
            }
            else
            {
                x[a[i][0]]++;
            }
            if (b.find(a[i][1]) != b.end())
            {
                flag = 1;
            }
            else
            {
                b[a[i][1]]++;
            }
        }
        if (flag == 0 && n>m)
        {
            cout << "YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
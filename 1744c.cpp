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
        int n;
        char s;
        cin >> n >> s;

        string str;
        cin >> str;
        int ans = 0;

        vector<int> q, g;
        if (s == 'g')
        {
            cout << "0"<< endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'g')
                {
                    g.push_back(i);
                }
                if (str[i] == s)
                {
                    q.push_back(i);
                }
            }

            for (int i = 0; i < q.size(); i++)
            {
                for (int j = 0; j < g.size(); j++)
                {
                    if (g[j] - q[i] > 0)
                    {
                        ans = max(ans, g[j] - q[i]);
                        // cout<<j<<i<<g[j]<<q[i]<<endl;
                        break;
                    }
                }
            }
            if (q[q.size() - 1] > g[g.size() - 1])
            {
                ans = max(ans, n - q[q.size() - 1] + g[0]);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
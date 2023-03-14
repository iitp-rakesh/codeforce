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
        cin >> n;
        string s;
        cin >> s;
        int flag = 1, ans = n, i = 0;
        while (flag)
        {
            if (s[i] == '0' && s[n - 1] == '1')
            {
                i++;
                n--;
                ans -= 2;
            }
            else if (s[i] == '1' && s[n - 1] == '0')
            {
                i++;
                n--;
                ans -= 2;
            }
            else
            {
                flag = 0;
            }
        }
        if(ans>0)
        cout << ans << endl;
        else
        cout<<0<<endl;
    }
    return 0;
}
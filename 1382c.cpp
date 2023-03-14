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
        int n, c = 0;
        cin >> n;
        string s, a, b;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                if (c>0)
                {
                    a.push_back('0');
                    b.push_back('2');
                 
                }
                else
                {
                     a.push_back('1');
                    b.push_back('1');
                }
            }
            else if (s[i] == '0')
            {
                a.push_back('0');
                b.push_back('0');
            }
            else
            {
                if (c == 0)
                {

                    a.push_back('1');
                    b.push_back('0');
                }

                else
                {
                    a.push_back('0');
                    b.push_back('1');
                }
                c++;
            }
        }
        cout << a << endl
             << b << endl;
    }
    return 0;
}
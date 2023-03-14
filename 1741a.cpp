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
        string a, b;
        cin >> a >> b;
        int s1 = a.size() - 1, s2 = b.size() - 1;
        if (a[s1] == b[s2])
        {
            if (a[s1] == 'S')
            {
                if (s1 > s2)
                {
                    cout << "<";
                }
                else if (s1 < s2)
                {
                    cout << ">";
                }
                else
                {
                    cout << "=";
                }
            }
            else
            {
                if (s1 > s2)
                {
                    cout << ">";
                }
                else if (s1 < s2)
                {
                    cout << "<";
                }
                else
                {
                    cout << "=";
                }
            }
        }
        else
        {
            cout << (a[s1] > b[s2] ? "<" : ">");
        }
        cout << endl;
    }
    return 0;
}
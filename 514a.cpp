#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string t;
    cin >> t;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '9')
        {
            if (i == 0)
                cout << 9;
            else
                cout << 0;
        }
        else if (t[i] > '4')
            cout << 9 - (t[i] - '0');
        else
            cout << t[i];
    }
    return 0;
}
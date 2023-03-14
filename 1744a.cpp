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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        // char b[50] = " ";
        string b="111111111111111111111111111111111111111111111111111";
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] == '1')
            {
                b[a[i]] = s[i];
            }
            else
            {
                if (b[a[i]] != s[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
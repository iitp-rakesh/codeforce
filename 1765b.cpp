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
        int n, flag = 0;
        cin >> n;
        string str;
        cin >> str;
        for (int i = 0; i < n; i+=3)
        {
    
                if (str[i] != str[i - 1])
                {
                    flag=1;
                }
                else{
                    flag=0;
                }
            
        }
        if (flag == 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}
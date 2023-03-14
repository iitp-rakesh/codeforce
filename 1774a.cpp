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
        string str;
        cin >> str;
        int flag = 0;
        if (str[0] == '1')
        {
            flag = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (str[i] == '1') 
            {
                flag++;
            }
            if(flag%2 == 1){
                cout << "+";
            }
            else
            {
                cout << "-";
            }
        }
        cout <<endl;
    }
    return 0;
}
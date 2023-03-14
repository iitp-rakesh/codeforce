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
        int a, b;
        cin >> a >> b;
        int arr[a];
        int odd = 0, even = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd % 2 == 0)
        {
            odd--;
        }
        if(odd>=b ||even>=(b-odd)){
            if(b%2==0)
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
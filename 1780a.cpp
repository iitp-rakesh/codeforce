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
        int odd = 0, even = 0;
        vector<int>o,e;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
                e.push_back(i+1);
            }
            else{
                o.push_back(i+1);
                odd++;
                }
        }
        if(even>1&&odd>0){
            cout<<"YES"<<endl;
            cout<<e[0]<<" "<<e[1]<<" "<<o[0];
        }
        else if(odd>2){
            cout<<"YES"<<endl;
            cout<<o[0]<<" "<<o[1]<<" "<<o[2];
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
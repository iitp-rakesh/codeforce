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
        int a,b,c;
        cin >> a >> b >> c;
        int ngroup=ceil(a/double(c));
        int arr[b];bool flag=false;
        // cout<<ngroup<<endl;
        for (int i = 0; i < b; i++)
        {
            cin >> arr[i];
            if(ngroup>arr[i]){
                flag=false;
            }
        }
        
    }
    return 0;
}
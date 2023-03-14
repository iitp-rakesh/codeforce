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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            v.push_back(element);
        }
        int ans = 0, mx = 0,flag=0;
        for (int i = 1; i <= n; i++)
        {
            int index = find(v.begin(), v.end(), i) - v.begin() + 1;
            if (index > mx)
            {
                ans++;
                mx = index;
                if(index==n && index!=i){ans++ ;
                flag=1;}
            }
        }
        // cout << ans << endl;
        if(ans==n&&flag==0){
            cout<<0<<endl;
        }
        else{
            cout<<ceil((n-ans+1)/float(k))<<endl;
        }
    }
    return 0;
}
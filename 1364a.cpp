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
        int a[n];
        long long sum=0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        if(sum%k==0){
            int l=-1,r=-1;
            for(int i=0;i<n;i++){
                if(a[i]%k){
                    l=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(a[i]%k){
                    r=i;
                    break;
                }
            }
            if(l==-1 && r==-1)
            cout<<-1<<endl;
            else
            cout<<max(n-l-1,r)<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}
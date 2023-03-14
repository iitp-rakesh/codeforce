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
        vector<int>a={1,2,4,7,11,16,22,29,37};
        int n,k;cin >>k>> n;
        int x=n-k;
        int ans[n];
        ans[0]=1;ans[1]=2;
        for(int i=2;i<k;i++){
            if(x>0){
            ans[i]=ans[i-1]+i;
            x-=i;
            }
            else
            ans[i]=ans[i-1]+1;
        }
        for(int i=0;i<k;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
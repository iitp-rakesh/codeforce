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
        int a[2][2];
        int mx=0,mn=101,ax,bx,ay,by;
        cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(mx<max(mx,a[i][j])){
                mx=max(mx,a[i][j]);
                ax=i;
                ay=j;
                }
                if(mn>min(mn,a[i][j])){
                mn=min(mn,a[i][j]);
                bx=i;
                by=j;
                }
            }
        }
        if(ax+bx==1&&ay+by==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
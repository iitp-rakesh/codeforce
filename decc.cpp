#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,sum=0;
    cin >> t;
    long long a[t], b[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    for(int i=0;i<t;i++){
        cin>>b[i];
    }
    sort(b,b+t);
    if(b[t-1]+b[t-2]>=sum){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
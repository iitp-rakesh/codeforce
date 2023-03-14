#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    long long a[n];
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    if(k==0){
        if(a[0]==1)
            cout<<-1;
        else
        cout<<a[0]-1;
    }
    else if(n==1){
        cout<<a[0];
    }
    else if(a[k]==a[k-1]){
        cout << -1;
    }
    else{
        cout<<a[k-1];
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, p;
    cin >> n >> p;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr + n);
    long long res=2*max(arr[0],p-arr[n-1]);
    for(int i = 1; i < n; i++){
        res=max(res,arr[i]-arr[i-1]);
    }
    printf("%.10f\n",res/2.);
    return 0;
}
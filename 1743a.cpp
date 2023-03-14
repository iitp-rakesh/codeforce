#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n

int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while(t--) {
    int n;cin >> n;int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<nCr(10-n,2)*6<<endl;
}
return 0;
}
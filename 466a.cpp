#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int n,m,a,b,tmp;
cin >> n >> m >> a >> b;
int cost=0;
if(b>m*a){
  cost=n*a;
}
else{
    cost=b*(n/m)+min((n%m)*a,b);
}
cout<<cost;
return 0;
}
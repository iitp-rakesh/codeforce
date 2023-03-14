#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int a,b,c;
cin >> a >> b >> c;
int x=a+(b*c),y=a*(b+c),z=(a+b)*c,t=a*b*c,u=a+b+c;
cout<<max(x,max(y,max(z,max(t,u))));
return 0;
}
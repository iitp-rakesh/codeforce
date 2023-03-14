#include <iostream>
using namespace std;
int main()
{ long long n;
cin>>n;
long long st[n];
for (long i = 0; i < n; i++)
{
    cin>>st[i];
}int chk=0;
for(long long i=0;i<n;i++){
    for(long long j=0;j<n;j++){
        if(st[i]>st[j]){
            chk++;
        }
    }
}
cout<<chk-2;
return 0;
}
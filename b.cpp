#include <iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long sum=0,chk=0;
    for (long long i = 0; i < n; i++)
    {   chk=sum;
        sum+=arr[i];
        cout<<sum/m-chk/m<<" ";
    }
    
return 0;
}
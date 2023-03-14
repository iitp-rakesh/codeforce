#include <iostream>
using namespace std;
int main()
{
    long long n,rem;
    cin>>n;
    rem=n%10;
    if(rem>5){
        cout<<n+(10-rem);
    }
    if(rem<6){
        cout<<n-rem;
    }
return 0;
}
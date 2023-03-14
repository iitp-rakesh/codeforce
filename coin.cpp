#include <iostream>
using namespace std;
int main()
{
    long long  n,m,k,l,x;
    bool pre=true;
    cin>>n>>m>>k>>l;
    if((n-k)>=m && (m-k)>=l){
         x=(n-k)/m;
        if((m*x-k)>=l && x>0){
            cout<<x;
            pre=false;
        }
    }
    if(pre){
        cout<<-1;
    }
return 0;
}
#include <iostream>
#include<math.h>
using namespace std;
bool composite(long long num)
{
    bool com = false;
    int chk = 0;
    for (long long  k = 1; k <= num; k++)
    {
        if (num% k == 0)
        {
            chk++;
        }
    }
    if (chk > 2)
    {
        com = true;
    }

    return com;
}
int main()
{
    long long  n;
    cin>>n;
    long long x=pow(10,9);
    for(long long a=2;a<x;a++){
        if(composite(a) && composite(a+n)){
            cout<<a+n<<" "<<a;
            break;
        }
    }
    return 0;
}
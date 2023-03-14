#include <iostream>
using namespace std;
int main()
{ long long n,chk=0;
cin>>n;
for(long long i=1;i<n;i++){
    if(n%i==0){
        chk++;
    }
}
cout<<chk;
return 0;
}
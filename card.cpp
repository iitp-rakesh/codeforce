#include <iostream>
using namespace std;
int main()
{ long long length,one=0,zero=0;
cin>>length;
char a[length];
for(int i=0;i<length;i++){
    cin>>a[i];
}
for(int i=0;i<length;i++){
    if(a[i]=='n'){
        one++;
    }
    if(a[i]=='z'){
        zero++;
    }
}
for(int i=0;i<one;i++){
    cout<<1<<" ";
}
for(int i=0;i<zero;i++){
    cout<<0<<" ";
}
return 0;
}
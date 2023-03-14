#include <iostream>
using namespace std;
int main()
{ int n,m;
cin>>n>>m;
int a[n];int b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}cout<<endl;
for(int j=0;j<m;j++){
    cin>>b[j];
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
        }
    }
}
return 0;
}
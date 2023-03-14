#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char abc[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>abc[i][j];
        }
    }
     int sumi=0,sumj=0;
     int chki=0,chkj=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abc[i][j]=='B'){
                sumi=sumi+i+1;
                sumj=sumj+j+1;
                chki++;
                chkj++;
            }
        }
    }
    cout<<sumi/chki<<" "<<sumj/chkj;
return 0;
}
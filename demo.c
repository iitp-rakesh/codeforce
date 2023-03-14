#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>x+1||y<-1*x+1){
            cout<<-1;
        }
        else{
            int i,z=y-1;
            for(i=0;i<z;i++){
                if(z>0){
                    cout<<"+";
                }
                else if(z<0){
                    cout<<"-";
                }
                else{
                    cout<<"*";
                }
            }
            for(;i<x;i++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
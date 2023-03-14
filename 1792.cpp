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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag=0;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                y++;
            }
            else if(s[i]=='D'){
                y--;
            }
            else if(s[i]=='L'){
                x--;
            }
            else if(s[i]=='R'){
                x++;
            }
            if(x==1&&y==1){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
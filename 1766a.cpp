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
        int q = 1,i=0,res=0;
        while (q!=0){
            // cout<<pow(10,i);
            q = n / int(pow(10,i));
            if(q>9){
                q=9;
            }
            i++;
            res+=q;
            // cout<<"  " <<q<<endl;
        }
        cout<<res<<endl;
    }
    return 0;
}
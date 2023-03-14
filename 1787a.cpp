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
        int a[n];
        vector<int>b;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2==0){
                b.push_back(i+1);
            }
        }
        if(b.size()%2==1){
            cout << -1<< endl;
        }
        else if(b.size()==0){
            cout << 1<< endl;
        }
        else{
            cout << b[b.size()/2-1] << endl;
        }
    }
    return 0;
}
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
        vector<int>e,o;
        for(int i = 0; i < n; i++) {
        	cin >> a[i];
        }
    sort(a,a+n,greater<int>());
        long long sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]%2==0){
                    sum+=a[i];
                }
                
            }
            else{
                if(a[i]%2){
                    sum-=a[i];
                }
            }
        }
        if(sum>0){
            cout<<"Alice"<<endl;
        }
        else if(sum<0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
    }
    return 0;
}
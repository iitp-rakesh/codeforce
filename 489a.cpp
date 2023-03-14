#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> a;
    int b[t];
    for (int i = 0; i < t; i++)
    {
        cin >> b[i];
        a.push_back(b[i]);
    }
    sort(b, b + t);
    int ans = 0;
    int an[t][2];
    for(int i = 0; i < t; i++)
    {
        int in=find(a.begin(), a.end(), b[i])-a.begin();
        if(in!=i && a[i]!=a[in]){
            swap(a[i], a[in]);
            an[ans][0]=i;an[ans][1]=in;
            ans++;
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<an[i][0]<<" "<<an[i][1]<<endl;
    }
    return 0;
}
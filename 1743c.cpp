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
        string str;
        cin >> str;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            v.push_back(element);
        }
        vector<int>dp(n+1,0);
        int index=0;
        for(int i = 0; i <n; i++){
            // cout<<str<<" "<<index<<endl;
            if(str[i]=='0'){
                index=i;
            }
            else{
                if(v[index]>v[i]){
                    swap(str[index],str[i]);
                    index=i;
                }
            }
        }
        // cout<<str;
       
        long long ans=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                ans+=v[i];
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
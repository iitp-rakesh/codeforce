#include <bits/stdc++.h>
using namespace std;
bool primeFactors(int n,set<int> &s)
{
    int c=2;
    set<int> s1;
    while(n>1)
    {
        if(n%c==0){
            auto pos=s.find(c);
            if(pos==s.end()){
                return true;
            }
            s1.insert(c);
        n/=c;
        }
        else c++;
    }
    s.insert(s1.begin(),s1.end());
    return false;
}
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
        vector<int> v;
        set<int> s;
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            v.push_back(element);
        }
        for (int i = 0; i < n; i++)
        {
            if(primeFactors(v[i],s)){
                flag=1;break;
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
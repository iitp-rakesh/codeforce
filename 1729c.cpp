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
        string str;
        cin >> str;
        string s = str;
         int size = str.size();
        string x=str.substr(1,size-1);
        // cout<<x<<" ";
        if (str[0] > str[size - 1])
        {
            sort(s.begin(), s.end(), greater<int>());
        }
        else
        {
            sort(s.begin(), s.end());
        }
        
        int cost = 0, jump = 0;
        int start=s.find(str[0]);
        int end=s.find(str[size - 1]);
        vector<int> v;
        // cout << s << " ";
        v.push_back(1);
        for (int i = start+1; i <=end; i++)
        {
            cost+=abs(s[i]-s[i-1]);
            jump++;
            v.push_back(x.find(s[i]) + 2);
        }
        cout <<cost<< " " << jump+1 << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
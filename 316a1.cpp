#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    int ans = 1;
    //    unordered_set<char> set;
    //     for (int i = 0; i < str.size(); i++){
    //         set.insert(str[i]);
    //     }
    //     for(auto &p:set){
    //         cout<<p;
    //     }
    // map<char,int>pair;
    // pair['A']=9;
    // pair['B']=9;
    // pair['C']=9;
    // pair['D']=9;
    // pair['E']=9;
    // pair['F']=9;
    // pair['G']=9;pair['H']=9;pair['I']=9;pair['J']=9;
    vector<int>a(10,9);    
    cout<<str.size()<<endl;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '?')
        {
            if (i = 0)
            {
                ans *= 9;
            }
            else
            {
                ans *= 10;
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'J')
        {
            int k = str[i] - 'A';
            cout << k << endl;
            if (i = 0)
            {
                ans *= 9;
                a[k] = 1;
            }
            else
            {
                ans *= min(9, a[k]);
            }
        }
        cout<<"x"<<i<<endl;
    }
    cout << ans;
    return 0;
}
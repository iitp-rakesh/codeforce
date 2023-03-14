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
        string s;
        cin >> s;
        string st = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        if (st.find(s) != std::string::npos)
        {
            cout <<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
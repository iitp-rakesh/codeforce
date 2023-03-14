#include <bits/stdc++.h>
using namespace std;
int solve(string s){
int index = s.find('L');
 
    if (index == std::string::npos) {
        return -1;
    }
    int in=s.find('R');
    if (in == std::string::npos) {
        return -1;
    }
    if(index>in){
        return 0;
    }
    if(s.find("LR")!=std::string::npos){
        return s.find("LR")+1;
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin >> n;
        string str;cin >> str;
       cout<<solve(str)<<endl;
    }
    return 0;
}
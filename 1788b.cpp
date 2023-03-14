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
        int n = str.length();
        string a,b;
        int c=0;
        for(int i=0;i<n;i++){
            if(int(str[i]-'0')%2==0){
                char c=int(str[i]-'0')/2+'0';
                a.push_back(c);
                b.push_back(c);
            }
            else{
                int x=int(str[i]-'0');
                if(c%2==0){
                    a.push_back(char(x/2+'1'));
                    b.push_back(char(x/2+'0'));
                }
                else{
                    b.push_back(char(x/2+'1'));
                    a.push_back(char(x/2+'0'));
                }
                c++;
            }
        }
        if(b[0]=='0' && b.size()>1){
            b.erase(b.begin());
        }
        cout << a << " " << b<< endl;
    }
    return 0;
}
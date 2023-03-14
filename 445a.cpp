#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> lines;
    for(int i = 0; i < n; i++){
        string s;cin >> s;
        lines.push_back(s);
    }
    for(int i=0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(lines[i][j] == '.'){
                if((i+j)%2 == 0){
                    lines[i][j] = 'B';
                }else{
                    lines[i][j] = 'W';
                }
            }
            else{
                lines[i][j] = '-';
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << lines[i] << endl;
    }
    return 0;
}

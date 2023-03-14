#include <iostream>
using namespace std;
int main()
{
    int size,a[size];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
    /*for(int i=0;i<size;i++){
        for(int j=size-1;j>=0;j--){
            int diff=(a[j]-a[i]);
            int x=j-i;
            cout<<"diff"<<diff<<endl<<"x"<<x<<endl;;
            if(diff==x){
                cout<<x-1;
                break;
            }

        }
    }*/
return 0;
}
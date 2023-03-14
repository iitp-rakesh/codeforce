#include <iostream>
using namespace std;
int main()
{
    int num,sheet;
    cin>>num>>sheet;
    int page[3];
    page[0]=2*num;  //red
    page[1]=5*num; //green
    page[2]=8*num; //blue
    int req,sum=0;
    for(int i=0;i<3;i++){
        req=page[i]/sheet;
        if(page[i]%sheet==0){
        
        }
        else{
            req++;
        }
        sum=sum+req;
    }
    cout<<sum;
return 0;
}
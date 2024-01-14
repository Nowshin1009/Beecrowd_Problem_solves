#include <iostream>
using namespace std;
int main() {
    int i,x,y,sum=0;
    cin>>x>>y;
    for(i=y+1;i<x;i++){
            if(i%2!=0){

                sum=sum+i;
            }

    }
    cout<<sum<<endl;
    return 0;
}

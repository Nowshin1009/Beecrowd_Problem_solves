#include<iostream>
using namespace std;
int main(){

int max=0,pos=0,i,n;

for(i=1;i<=100;i++){
    cin>>n;
    if(n>max){
        max=n;
        pos=i;
    }
}

cout<<max<<endl<<pos<<endl;

}

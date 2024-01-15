#include <iostream>

using namespace std;

int main() {

    int x,n,i;
    cin>>x;
    for(i=0;i<x;i++){
        cin>>n;
        if((n!=0)&&(n%2==0)){
          if(n<0){
            cout<<"EVEN NEGATIVE"<<endl;
          }
          else{cout<<"EVEN POSITIVE"<<endl;}
        }
        else if((n!=0)&&(n%2!=0)){
            if(n<0){
            cout<<"ODD NEGATIVE"<<endl;
          }
          else{cout<<"ODD POSITIVE"<<endl;}
        }
       else{cout<<"NULL"<<endl;}
    }

}


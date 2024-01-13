#include <iostream>
using namespace std;

int main() {
    float n;
    int i,count=0;
    for(i=0;i<6;i++){
     cin>>n;
        if(n>0){
        ++count;
        }
    }

    cout<<count<<endl;
    return 0;
}



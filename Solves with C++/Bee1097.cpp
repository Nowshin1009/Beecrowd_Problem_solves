#include <iostream>

using namespace std;

int main() {

    int i,j, k=7;
    for(i=1;i<=9;i+=2){

        for(j=k;j>=k-2;j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        k+=2;
    }

    return 0;
}

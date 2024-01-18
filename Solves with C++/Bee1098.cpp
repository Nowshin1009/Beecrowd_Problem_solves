#include <iostream>

using namespace std;

int main() {

    float i,j=1;
    for(i=0;i<=2.20;i+=0.2){
        cout<<"I="<<i<<" J="<<j<<endl;
        cout<<"I="<<i<<" J="<<j+1<<endl;
        cout<<"I="<<i<<" J="<<j+2<<endl;
        j+=0.2;
    }

    return 0;
}

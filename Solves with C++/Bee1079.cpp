#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    int i,n;
    float x,y,z,avg;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>x>>y>>z;
        avg=(x*2+y*3+z*5)/(2+3+5);
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }

    return 0;
}

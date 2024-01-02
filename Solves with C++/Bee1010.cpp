#include <iostream>
#include<iomanip>
using namespace std;

int main() {
 int a1,b1,a2,b2;
 float a3,b3;

 cin>>a1>>a2>>a3;
 cin>>b1>>b2>>b3;

 cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<(a2*a3)+(b2*b3)<<endl;

    return 0;
}

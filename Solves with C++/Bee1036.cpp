#include<iostream.h>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
float a,b,c,D,R1,R2;   //10.0 20.1 5.1
cin>>a>>b>>c;
D=(b*b)-(4*a*c) ;

if((D>0) && (a!=0)){
    D=sqrt(D);
    R1=(-b+D)/(2*a);
    R2=(-b-D)/(2*a);

    cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl;
    cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl;

}

else {
    cout<<"Impossivel calcular"<<endl;
}
return 0;
}

#include <iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {

   float a,b,c;
   cin>>a>>b>>c;
   float arr[]={a,b,c};
   sort(&arr[0],&arr[3]);
   if((arr[0]+arr[1])>arr[2]){
      cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
   }
   else{
       cout<<"Area = "<<fixed<<setprecision(1)<<((a+b)/2)*c<<endl;
   }
    return 0;
}

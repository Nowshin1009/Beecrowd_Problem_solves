#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 double A,B;
 cin>>A>>B;
cout<<"MEDIA = "<<fixed<<setprecision(5)<<((A*3.5)+(B*7.5))/(3.5+7.5)<<endl;
   return 0;
}

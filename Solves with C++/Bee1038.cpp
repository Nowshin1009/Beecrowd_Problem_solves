#include <iostream>
#include<iomanip>
using namespace std;
int main() {

   int x,y;
   float total;
   cin>>x>>y;

   switch (x) {
  case 1:
  total=y*4.00;
    break;
  case 2:
   total=y*4.50;
    break;
  case 3:
   total=y*5.00;
    break;
  case 4:
    total=y*2.00;
    break;
    case 5:
    total=y*1.50;
    break;

   }

   cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}

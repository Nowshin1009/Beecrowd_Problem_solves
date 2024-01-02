#include <iostream>
#include<iomanip>
using namespace std;

int main() {
 double A,B,C;
 cin>> A>>B>>C;
 cout<<"MEDIA = "<<fixed<<setprecision(1)<<((A*2)+(B*3)+(C*5))/(2+3+5)<<endl;
    return 0;
}

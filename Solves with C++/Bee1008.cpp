#include <iostream>
#include<iomanip>
using namespace std;
 int main() {
 int num,month;
 float sal;
 cin>>num>>month>>sal;
 cout<<"NUMBER = "<<num<<endl;
 cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<month*sal<<endl;
    return 0;
}

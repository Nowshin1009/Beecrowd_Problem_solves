#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    char Name[50];
    double sal, total;
    cin>>Name;
    cin>>sal>>total;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<sal+(total*15)/100<<endl;

    return 0;
}

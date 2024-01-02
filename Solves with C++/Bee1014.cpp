#include <iostream>
#include<iomanip>
using namespace std;

int main() {

int t_distance;
float t_fuel;

cin>>t_distance>>t_fuel;

cout<<fixed<<setprecision(3)<<t_distance/t_fuel<<" km/l"<<endl;

    return 0;
}

#include <iostream>
#include<iomanip>
using namespace std;

int main() {

 int time,avg_speed,dist;
 double fuel;

 cin>>time>>avg_speed;

 dist=time*avg_speed;
 fuel=dist/12.0;

 cout<<fixed<<setprecision(3)<<fuel<<endl;

    return 0;
}

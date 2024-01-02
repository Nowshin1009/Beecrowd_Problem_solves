#include <iostream>

using namespace std;

int main() {

int day,month,year;
cin>>day;

year=day/365;
day=day-(year*365);

month=day/30;
day=day-(month*30);

cout<<year<<" ano(s)"<<endl<<month<<" mes(es)"<<endl<<day<<" dia(s)"<<endl;

    return 0;
}

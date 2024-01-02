#include <iostream>

using namespace std;

int main() {

int hour,min,sec;
cin>>sec;

hour=sec/3600;
sec=sec-(hour*3600);

min=sec/60;
sec=sec-(min*60);

cout<<hour<<":"<<min<<":"<<sec<<endl;

    return 0;
}

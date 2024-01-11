#include <iostream>

using namespace std;

int main() {

    int start,end,hours;
    cin>>start>>end;
    if (start != end){
    if((start>12)){
        start= 24-start;
    }
    else if ((start<12)) {
        start= 12-start;
    }
    if ((end>12)){
        end= end-12;
    }
    hours= start+end;
    }
    else {
        hours=24;
    }
    cout<<"O JOGO DUROU "<<hours<<" HORA(S)"<<endl;

    return 0;
}

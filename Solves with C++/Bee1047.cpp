#include<iostream>
using namespace std;

int main(){

int s_hour,s_min,e_hour,e_min,hours,minitues;
cin>>s_hour>>s_min>>e_hour>>e_min;

if (s_hour==e_hour){
hours=24;
minitues=e_min-s_min;
}
else{
    if((s_hour>12)){
        s_hour= 24-s_hour;
    }
    else if ((s_hour<12)) {
        s_hour= 12-s_hour;
    }
    if ((e_hour>12)){
        e_hour= e_hour-12;
    }
    hours= s_hour+e_hour;
    minitues=e_min-s_min;
    }
cout<<"O JOGO DUROU "<<hours<<" HORA(S) E "<<minitues<<" MINUTO(S)"<<endl;

}

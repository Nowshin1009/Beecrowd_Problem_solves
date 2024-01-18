#include<iostream>
#include<iomanip>
using namespace std;
    int main(){

    int n, x,coelhos=0,ratos=0,sapos=0;
    string c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>c;
        if(c=="C"){
           coelhos=coelhos+x;
        }
       else if(c=="R"){
          ratos =ratos+x;
        }
        else if(c=="S"){
           sapos=sapos+x;
        }
    }
    float total=sapos+ratos+coelhos;

cout<<"Total: "<<total<<" total"<<endl;
cout<<"Total de coelhos: "<<coelhos<<endl;
cout<<"Total de ratos: "<<ratos<<endl;
cout<<"Total de sapos: "<<sapos<<endl;
cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<((coelhos/total)*100)<<" %"<<endl;
cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<((ratos/total)*100)<<" %"<<endl;
cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<((sapos/total)*100)<<" %"<<endl;
}

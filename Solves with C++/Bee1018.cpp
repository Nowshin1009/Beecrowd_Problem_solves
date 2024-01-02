#include<iostream>

using namespace std;

int main() {

  int note,N;

  cin>>N;
  cout<<N<<endl;

  note=N/100;
  N=N-(note*100);
  cout<<note<<" nota(s) de R$ 100,00"<<endl;

  note=N/50;
  N=N-(note*50);
  cout<<note<<" nota(s) de R$ 50,00"<<endl;

  note=N/20;
  N=N-(note*20);
  cout<<note<<" nota(s) de R$ 20,00"<<endl;

  note=N/10;
  N=N-(note*10);
  cout<<note<<" nota(s) de R$ 10,00"<<endl;

  note=N/5;
  N=N-(note*5);
  cout<<note<<" nota(s) de R$ 5,00"<<endl;

   note=N/2;
  N=N-(note*2);
  cout<<note<<" nota(s) de R$ 2,00"<<endl;

  note=N/1;
  N=N-(note*1);
  cout<<note<<" nota(s) de R$ 1,00"<<endl;


    return 0;
}

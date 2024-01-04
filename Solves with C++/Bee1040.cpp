#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    float a,b,c,d,e,avg;
    cin>>a>>b>>c>>d;
    avg= (a*2+b*3+c*4+d*1)/(2+3+4+1);
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
  if(avg>=7.0){
      cout<<"Aluno aprovado." <<endl;
  }
  else if (avg<5.0){
      cout<<"Aluno reprovado." <<endl;
  }
  else if (5.0<avg<6.9){
      cout<<"Aluno em exame." <<endl;
      cin>>e;
      cout<<"Nota do exame: " <<fixed<<setprecision(1)<<e<<endl;
      avg=(avg+e)/2;

      if(avg>=5.0){
      cout<<"Aluno aprovado." <<endl;
  }
  else if (avg<=4.9){
      cout<<"Aluno reprovado." <<endl;
  }

 cout<<"Media final: " <<fixed<<setprecision(1)<<avg<<endl;
  }
    return 0;
}

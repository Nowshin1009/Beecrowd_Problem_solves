#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float oldSalary,newSalary,earned;
int rate;
cin>>oldSalary;

if((oldSalary>=0) && (oldSalary<=400.00)){
    rate=15;
}
else if((oldSalary>400) && (oldSalary<=800.00)){
        rate=12;
        }
else if((oldSalary>800.00) && (oldSalary<=1200.00)){
        rate=10;
        }
else if((oldSalary>1200.00) && (oldSalary<=2000.00)){

        rate= 7;
        }
else if(oldSalary>2000.00){
    rate=4;
}
newSalary= oldSalary+((oldSalary*rate)/100);
cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<newSalary-oldSalary<<endl;
cout<<"Em percentual: "<<rate<<" %"<<endl;
}

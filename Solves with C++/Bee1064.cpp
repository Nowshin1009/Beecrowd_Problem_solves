#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float n, sum=0.0, count=0.0;
for(int i=0;i<6;i++){
cin>>n;
if (n>0){
 count++;
 sum=sum+n;
}
}
float avg=sum/count;
cout<<count<<" valores positivos"<<endl;
cout<<fixed<<setprecision(1)<<avg<<endl;

}

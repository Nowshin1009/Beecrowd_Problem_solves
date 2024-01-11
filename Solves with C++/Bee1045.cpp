#include<iostream>
#include<algorithm>
using namespace std;
int main(){
float a,b,c;
cin>>a>>b>>c;
float arr[];



cout<<arr[0]<<arr[1]<<arr[2]<<endl;
if(arr[0]>=(arr[1]+arr[2])){
    cout<<"NAO FORMA TRIANGULO"<<endl;}

if ((arr[0]*arr[0])==((arr[1]*arr[1])+(arr[2]*arr[2]))){
    cout<<"TRIANGULO RETANGULO"<<endl;
}
if ((arr[0]*arr[0])>((arr[1]*arr[1])+(arr[2]*arr[2]))){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
}
if ((arr[0]*arr[0])<((arr[1]*arr[1])+(arr[2]*arr[2]))){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
}
if (arr[0]==arr[1]==arr[2]){
    cout<<"TRIANGULO EQUILATERO"<<endl;
}
if((arr[0]==arr[1])||(arr[1]==arr[2])||(arr[0]==arr[2])){
    cout<<"TRIANGULO ISOSCELES"<<endl;
}
}

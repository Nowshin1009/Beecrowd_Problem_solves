#include<iostream>
using namespace std;
int main(){

string first,second,third;
cin>>first>>second>>third;

if (first=="vertebrado"){
    if (second=="ave"){
            if(third=="carnivoro"){
                cout<<"aguia"<<endl;
            }
            else if(third=="onivoro"){
                cout<<"pomba"<<endl;
            }

    }

    else if (second=="mamifero"){
            if(third=="onivoro"){
                cout<<"homem"<<endl;
            }
            else if(third=="herbivoro"){
                cout<<"vaca"<<endl;
            }
    }
}

else if(first=="invertebrado"){
        if (second=="inseto"){
            if(third=="hematofago"){
                cout<<"pulga"<<endl;
            }
            else if(third=="herbivoro"){
                cout<<"lagarta"<<endl;
            }

    }

    else if (second=="anelideo"){
            if(third=="hematofago"){
                cout<<"sanguessuga"<<endl;
            }
            else if(third=="onivoro"){
                cout<<"minhoca"<<endl;
            }
    }

}
}

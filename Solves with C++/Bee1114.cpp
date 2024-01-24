#include <iostream>

using namespace std;

int main() {

    int pass;

    while(cin>>pass){
        if(pass==2002){
            cout<<"Acesso Permitido"<<endl;
              break;
        }

        else{
            cout<<"Senha Invalida"<<endl;
        }
    }

    return 0;
}

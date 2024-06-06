#include<iostream>
using namespace std;

int main(){
    int cod, passwd;

    cin >> cod;
    if (cod == 1234){
        cin >> passwd;

        if (passwd == 9999){
            cout << "Acesso Concedido";
        }
        else{
            cout << "Senha incorreta";
        }
    }
    else{
        cout << "Usuario invalido!" <<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    float n1,n2;

    cin >> n1 >> n2;

    if (n1>n2)
        cout << "Primeiro maior";
    else if (n2>n1)
        cout << "Segundo maior";
    else
        cout << "Numeros iguais";
    
    return 0;
}
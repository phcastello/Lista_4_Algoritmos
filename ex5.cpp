#include<iostream>
#include<string>
using namespace std;

int main(){
    string nome, desconto;
    int quantidade;
    float preco, sub, total;


    cout << "digite o nome, a quantidade e o preco do produto: ";
    cin >> nome >> quantidade >> preco;
    sub = preco*quantidade;

    if (quantidade <= 5){
        total = sub-(sub*0.02);
        desconto = "2%";
    }
    else if (quantidade > 5 && quantidade <=10){
        total = sub-(sub*0.03);
        desconto = "3%";
    }
    else if (quantidade > 10){
        total = sub-(sub*0.05);
        desconto = "5%";
    }
    else
        cout << "erro";
    
    cout <<"subtotal: "<< sub << endl;
    cout <<"desconto: "<< desconto << endl;
    cout <<"total: "<< total << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int idade, trabalho, cod, comeco;


    cout << "insira seu codigo, idade e quando comecou na empresa: ";
    cin >> cod >> idade >> comeco;

    trabalho = 2024 - comeco;

    if (idade >= 60 && trabalho >= 25){
        cout << idade << endl;
        cout << trabalho << endl;
        cout << "requerer aposentadoria";
    }
    else if (idade > 65 || trabalho > 30){
        cout << idade << endl;
        cout << trabalho << endl;
        cout << "requerer aposentadoria";
    }
    else{
        cout << idade << endl;
        cout << trabalho << endl;
        cout << "nao requerer";
    }

    return 0;
}
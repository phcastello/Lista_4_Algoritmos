#include<iostream>
using namespace std;

int main(){
    int sal, nsal;
    char plano;


    cin >> plano >> sal;

    switch (plano){
        case 'A':
            nsal = sal * 1.10;
            break;
        case 'B':
            cout << sal <<endl;
            cout << (sal*1.15) <<endl;
            nsal = sal*1.15; 
            break;

        case 'C':
            nsal = sal*1.20;
            break;
            
        default:
            break;
    }
    cout << nsal <<endl;
    cout << "Novo salario: " << nsal <<endl;

    return 0;
}
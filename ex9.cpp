#include<iostream>
using namespace std;

int main(){
    char combustivel;
    float Alcool=2.90, Gasolina=3.30, litros;

    cin >> litros;
    cin >> combustivel;

    switch (combustivel){
        case 'A':
            if(litros > 20){
                Alcool = Alcool - (Alcool*0.05);
            }
            else{
                Alcool = Alcool - (Alcool*0.03);
            }
            cout << Alcool*litros;
            break;
        
        case 'G':
            if(litros > 20){
                Gasolina -= (Gasolina*0.06);
            }
            else{
                Gasolina -= (Gasolina*0.04);
            }
            cout << Gasolina*litros;
            break;
        
        default:
            break;
    }

    return 0;
}
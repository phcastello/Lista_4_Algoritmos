#include<iostream>
#include<string>
using namespace std;

int main(){
    float total, kg_mora, kg_maca, sub, morango, maca;

    cout << "insira a quantidade de morangos em kg: ";
    cin >> kg_mora;
    cout << "insira a quantidade de macas em kg: ";
    cin >> kg_maca;

    if (kg_mora > 5)
        morango = 2.2;
    else
        morango = 2.5;

    if (kg_maca > 5)
        maca = 1.5;
    else
        morango = 1.8;

    sub = kg_mora*morango + kg_maca*maca;

    if (kg_mora+kg_maca > 8 || sub > 25)
        total = sub - (sub*0.1);
    else
        total = sub;
    
    cout << total;

    return 0;
}
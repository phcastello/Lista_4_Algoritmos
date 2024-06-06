#include<iostream>
using namespace std;

int main(){
    float n1,n2,n3,menor,maior,meio;


    maior = max(max(n1,n2),n3);
    menor = min(min(n1,n2),n3);

    if (n1!=menor && n1 != maior)
        meio = n1;
    else if (n2!=menor && n2!=maior)
        meio = n2;
    else
        meio = n3;

    cout << maior + menor;



    return 0;
}
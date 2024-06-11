#include <iostream>

using namespace std;

int main(){
    int cont = 0;
    int fim = 18;
    //Contagem pulando 3 em 3
    while (cont <= fim) {
        cout << cont << " ";
        cont += 3;
    }
    cout << " Acabou";
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int cont = 10;
    int fim = 3;
    //Contagem regressiva
    while (cont >= fim) {
        cout << cont << " ";
        cont--;
    }
    cout << " Acabou";
    return 0;
}

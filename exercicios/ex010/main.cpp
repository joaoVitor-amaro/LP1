#include <iostream>

using namespace std;

int main(){
    int cont = 0, soma = 0;
    int num;
    cout << "Informe um number: ";
    cin >> num;
    while(cont <= num) {
        soma+=cont;
        cont++;
    }
    cout << "Somador dos " << num << " primeiros numeros" << endl;
    cout << "Soma: " << soma;
    return 0;
}

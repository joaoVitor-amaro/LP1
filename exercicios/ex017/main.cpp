#include <iostream>

using namespace std;

int main(){
    int cont = 1;
    float preco, maiorPreco, menorPreco;
    //O loop roda tr�s vezes para ler tr�s pre�os e determinar o maior e o menor pre�o
    while(cont <= 3) {
        cout << "Preco: $";
        cin >> preco;
        if(cont == 1) {
            //No primeiro loop recebe o primeiro valor digitado
            maiorPreco = preco;
            menorPreco = preco;
        } else {
           if(preco > maiorPreco) {
           //Verifica se o preco digitado � maior que o atual maior pre�o
               maiorPreco = preco;
           }
           if(preco < menorPreco) {
               //Verifica se o preco digitado � menor que o atual menor pre�o
               menorPreco = preco;
           }
        }
        cont++;
    }
    cout << "Maior preco: $" << maiorPreco << endl;
    cout << "Menor preco: $" << menorPreco << endl;
    return 0;
}

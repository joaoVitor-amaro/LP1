#include <iostream>

using namespace std;

int main(){
    int cont = 1;
    float preco, maiorPreco, menorPreco;
    //O loop roda três vezes para ler três preços e determinar o maior e o menor preço
    while(cont <= 3) {
        cout << "Preco: $";
        cin >> preco;
        if(cont == 1) {
            //No primeiro loop recebe o primeiro valor digitado
            maiorPreco = preco;
            menorPreco = preco;
        } else {
           if(preco > maiorPreco) {
           //Verifica se o preco digitado é maior que o atual maior preço
               maiorPreco = preco;
           }
           if(preco < menorPreco) {
               //Verifica se o preco digitado é menor que o atual menor preço
               menorPreco = preco;
           }
        }
        cont++;
    }
    cout << "Maior preco: $" << maiorPreco << endl;
    cout << "Menor preco: $" << menorPreco << endl;
    return 0;
}

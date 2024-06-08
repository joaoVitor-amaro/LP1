#include <iostream>

using namespace std;

int main(){
    float valorCasa, salarioComprador;
    int qtAno_prestacao;
    cout << "Valor da casa: ";
    cin >> valorCasa;
    cout << "Quantos anos de prestacao? ";
    cin >> qtAno_prestacao;
    cout << "Salario: ";
    cin >> salarioComprador;

    //calculo da prestacao
    float valorPrestacao = valorCasa / (12*qtAno_prestacao);
    //calcular os 30% do salario do comprador
    float percento30Salario = salarioComprador * 0.3;

    cout << "Valor da casa: $" << valorCasa << endl;
    cout << "Prestacao: $" << valorPrestacao << endl;

    //Compare o valor da prestação com 30% do salário para efetuar a compra
    if(valorPrestacao <= percento30Salario) {
        cout << "Compra Aceita" << endl;
    } else {
       cout << "Compra Negado" << endl;
    }
    return 0;
}

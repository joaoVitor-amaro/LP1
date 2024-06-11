#include <iostream>

using namespace std;

int main(){
    int cont = 0, somaIdade = 0, qtMaiorIdade = 0, qtMenorCinco = 0, maiorIdade = 0, idade;
    while(cont < 5) {
        cout << "Idade: ";
        cin >> idade;
        somaIdade += idade;
        if(idade >= 18) {
            qtMaiorIdade++;
        }
        if(idade <= 5) {
            qtMenorCinco++;
        }
        if(cont == 0) {
        //No primeiro loop, recebe o primeiro valor digitado
            maiorIdade = idade;
        } else {
            if(idade > maiorIdade) {
            //Verifica se o preco digitado é maior que o atual maior preço
                maiorIdade = idade;
            }
        }
        cont++;
    }

    float mediaIdade = somaIdade / (cont);
    cout << "Media das Idades: " << mediaIdade << endl;
    cout << "Quantidade Maior de Idade: " << qtMaiorIdade << endl;
    cout << "Quantidade Menor de cinco anos: " << qtMenorCinco << endl;
    cout << "Maior idade: " << maiorIdade;
    return 0;
}

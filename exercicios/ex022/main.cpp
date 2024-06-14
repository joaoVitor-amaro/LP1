#include <iostream>
#include <cctype>//Usar a função toupper()
#include <cstring>
using namespace std;

int main(){
    int idade;
    char sexo;
    char resp;
    int cont = 0;
    int maiorIdade;
    int qtHomem = 0;
    int qtMulher = 0;
    int menorIdadeMulher;
    do {
        cout << "Sexo [F/M]: ";
        cin >> sexo;
        cout << "Idade: ";
        cin >> idade;
        if(cont == 0) {
        //No primeiro loop, inicializamos maiorIdade com a idade atual
            maiorIdade = idade;
        } else {
         //Caso contrário, verifica se a idade atual é maior que maiorIdade
            if(idade > maiorIdade) {
            //Se for, atualiza o valor da variavel
                maiorIdade = idade;
            }
        }
        sexo = toupper(sexo);
        if(sexo == 'M') {
            qtHomem++;
        }

        //
        if(strcmp(&sexo, "F") == 1) {
            qtMulher++;
           //Verifica se esta é a primeira mulher cadastrada
            if(qtMulher == 1) {
             //Inicializa 'menorIdadeMulher' com a idade da primeira mulher cadastrada
                menorIdadeMulher = idade;
            } else {
                //Caso contrário, verifica se a idade atual é menor que maiorIdade
                if(idade < menorIdadeMulher) {
                    //Se for, atualiza o valor da variavel
                    menorIdadeMulher = idade;
                }
            }
        }

        cout << "Deseja continuar? [S/N]: ";
        cin >> resp;
        //Coloca a string em letra maiuscula
        resp = toupper(resp);
        cont++;
    } while(strcmp(&resp, "S") == 1);

    cout << "Maior idade: " << maiorIdade << endl;
    cout << "Quantidade de homens: " << qtHomem << endl;
    cout << "Menor idade da Mulher: " << menorIdadeMulher << endl;
    return 0;
}

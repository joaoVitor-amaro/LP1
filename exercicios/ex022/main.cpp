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
        cout << "Deseja continuar? [S/N]: ";
        cin >> resp;
        //Coloca a string em letra maiuscula
        resp = toupper(resp);
    } while(strcmp(&resp, "S") == 0);

    cout << "Maior idade: " << maiorIdade << endl;
    cout << "Quantidade de homens: " << qtHomem << endl;
    return 0;
}

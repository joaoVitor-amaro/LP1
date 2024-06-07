#include <iostream>

using namespace std;

int main(){
    int idade;

    cout << "Sua idade: ";
    cin >> idade; //Atribui o valor digitado pelo teclado a variável

    //Estrutura de condição
    if (idade >= 16 && idade < 18) {
        cout << "Voto opcional" << endl;
    } else if(idade >= 18) { //Estrutura de condição aninhada
        //Caso a primeira condiçao nao seja verdadeira será verificada
        //nessa segunda condiçao
        cout << "Voto obrigatorio" << endl;
    } else {
        //Caso as ultimas duas condiçoes nao seja verdadeira
        //Entrará essa ultima condiçao
       cout << "Nao pode votar" << endl;
    }

    int opcao = 1;

    switch(opcao) {
        case 5:
            cout << "Cadastrar" << endl;
            break;
        case 2:
            cout << "listar User" << endl;
            break;
        default:
            cout << "Saindo..." << endl;
    }

    return 0;
}

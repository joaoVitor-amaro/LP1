#include <iostream>

using namespace std;

int main(){
    int idade;

    cout << "Sua idade: ";
    cin >> idade; //Atribui o valor digitado pelo teclado a vari�vel

    //Estrutura de condi��o
    if (idade >= 16 && idade < 18) {
        cout << "Voto opcional" << endl;
    } else if(idade >= 18) { //Estrutura de condi��o aninhada
        //Caso a primeira condi�ao nao seja verdadeira ser� verificada
        //nessa segunda condi�ao
        cout << "Voto obrigatorio" << endl;
    } else {
        //Caso as ultimas duas condi�oes nao seja verdadeira
        //Entrar� essa ultima condi�ao
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

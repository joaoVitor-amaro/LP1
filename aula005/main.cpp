#include <iostream>

using namespace std;
#define TAM 10
#define TAM1 3

int main(){
    //Declara��o de um array com 10 indices
    int vetor[TAM];

    //Declara��o de array com valores pr� definidos
    int vetor1[TAM1] = {5, 9, 5};

    //Atribui��o de valor ao array
    vetor[0] = 5;
    vetor[1] = 6;
    vetor[2] = 7;
    //O valor de cada valor do array � acessado
    //pelo indice em colchete. Ex: [0]
    cout << vetor[2] << endl;

    cout << "Atribuicao com laco de repeticao" << endl;
    //Atribui��o ao array com la�o de repeti��o
    //sizeof() calcula a quantidade de byte de uma variavel
    for(int i = 0; i < sizeof(vetor)/4; i++) {
        vetor[i] = i + 1;
        cout << vetor[i] << " -> ";
    }
    cout << "Acabou";
    return 0;
}

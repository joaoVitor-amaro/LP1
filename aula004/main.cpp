#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    //Variavel char com limite de caractere
    char nome[] = "Vitor";
    char nome1[] = "Vitor";

    //Variavel char sem limite de caractere
    string texto = "Hello";
    string texto1 = "Hello";

    //Compara��o de string da variavel tipo string
    if(texto == texto1) {
        cout << "Strings iguais" << endl;
    }

    //Compara��o de string do tipo char
    //strcmp - Fun��o da biblioteca cstring
    //Retorna 0 se as strings forem iguais, caso
    //contrario retorna 1
    if(strcmp(nome, nome1) == 0) {
        cout << "CHAR iguais" << endl;
    } else {
        cout << "N" << endl;
    }

    //atribui��o de string a uma variavel do tipo string
    string newTexto = texto;
    cout << newTexto << endl;

    char newNome[20];

    for(int i = 0; i < strlen(nome); i++) {
        newNome[i] = nome[i];
    }
    cout << newNome << endl;

    cout << "Tamanho da palavra " << newNome << ": " << strlen(newNome) << endl;
    cout << "Tamanho da palavra " << newTexto << ": " << newTexto.length() << endl;
    return 0;
}

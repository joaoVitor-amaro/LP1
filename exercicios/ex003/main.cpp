#include <iostream>

using namespace std;

int main(){
    //criacao das variaveis
    float nota1, nota2, media;

    //Inseri os valores nas variaveis pelo teclado
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;

    //Calculo da media das notas
    media = (nota1 + nota2) / 2;

    cout << "Media: " << media << endl;
    return 0;
}

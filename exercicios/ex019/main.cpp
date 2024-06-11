#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char sexo;
    int cont = 0;
    int qtHomem = 0;
    int qtMulher = 0, qtMulheresAcima20 = 0;
    int idade;
    int somaIdadeHomem = 0;
    int somaIdadeGrupo = 0;
    while(cont < 5) {
        cout << "Sexo [F ou M]: ";
        cin >> sexo;
        cout << "Idade: ";
        cin >> idade;
        somaIdadeGrupo += idade;
        if(toupper(sexo) == 'M') {
            qtHomem++;
            somaIdadeHomem += idade;
        }

        if(toupper(sexo) == 'F') {
            qtMulher++;
            if(idade >= 20) {
                qtMulheresAcima20++;
            }
        }
        cont++;
    }
    float mediaIdadeGrupo = somaIdadeGrupo/(cont+1);
    float mediaIdadeHomem = somaIdadeHomem/(qtHomem);
    cout << "Qt Homem: " << qtHomem << endl;
    cout << "Qt Mulher: " << qtMulher << endl;
    cout << "Qt Mulher acima de 20 anos: " << qtMulheresAcima20 << endl;
    cout << "Media da idade do grupo: " << mediaIdadeGrupo << endl;
    cout << "edia idade dos Homens: " << mediaIdadeHomem << endl;
    return 0;
}

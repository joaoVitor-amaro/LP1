#include <iostream>

using namespace std;

int main(){
    int vetor[10];
    int maiorTwoNum = 0;
    int maiorOneNum = 0;
    int cont = 0;
    int num = 0;
    while (true) {
        cin >> num;
        if (num == 0 || cont >= 10) {
            break;
        } else {
            vetor[cont] = num;
            cont++;
        }
    }

    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    maiorOneNum = vetor[0];
    maiorTwoNum = vetor[1];
    for(int i = 0; i < cont; i++) {
        if(vetor[i] > maiorOneNum) {
            maiorTwoNum = maiorOneNum;
            maiorOneNum = vetor[i];
        } else if(vetor[i] > maiorTwoNum && vetor[i] != maiorOneNum){
           maiorTwoNum = vetor[i];
        }
    }
    cout << "Maior: " << maiorOneNum << endl;
    cout << "Segundo maior: "  << maiorTwoNum << endl;
    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    float larguraTerreno, lengthTerreno;
    char tipoTerreno[50];

    cout << "Largura do terreno em metros: ";
    cin >> larguraTerreno;
    cout << "Comprimento do terreno em metros: ";
    cin >> lengthTerreno;
    //Calculo da area
    float areaTerreno = larguraTerreno * lengthTerreno;

    //Verifica o tipo do terreno
    if(areaTerreno >= 500) {
        strcpy(tipoTerreno, "VIP");
    } else if(areaTerreno > 100 && areaTerreno < 500) {
        strcpy(tipoTerreno, "MASTER");
    } else {
        strcpy(tipoTerreno, "POPULAR");
    }

    cout << "Area do terreno: " << areaTerreno << endl;
    cout << "Tipo Terreno: " << tipoTerreno << endl;
    return 0;
}

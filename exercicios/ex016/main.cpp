#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int cont = 0;
    int numberSort, qtAcimaCinco = 0, qtDivisivelTres = 0;
    while(cont <= 20) {
        numberSort = rand() % 10 + 1; //Sorteia os number
        cout << numberSort << " ";
        if(numberSort >= 5) {
        //quantidade de number acima de 5
            qtAcimaCinco++;
        }
        if(numberSort % 3 == 0) {
        //Quantidade de number divisivel por 3
            qtDivisivelTres++;
        }
        cont++;
    }
    cout << "" << endl;
    cout << "Qt Acima de 5: " << qtAcimaCinco << endl;
    cout << "Qt Divisivel por 3: " << qtDivisivelTres << endl;
    return 0;
}

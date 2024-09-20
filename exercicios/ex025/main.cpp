#include <iostream>

using namespace std;

int main(){
    int sequenciaNumber;
    cin >> sequenciaNumber;

    int cont = 0;
    int number;
    int maiorNumber = 0;
    while(cont < sequenciaNumber) {
        cin >> number;
        if(cont == 0) {
            maiorNumber = number;
        } else {
             if(number > maiorNumber) {
                maiorNumber = number;
             }
        }
        cont++;
    }
    cout << maiorNumber;
    return 0;
}
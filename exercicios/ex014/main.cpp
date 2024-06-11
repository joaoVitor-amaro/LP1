#include <iostream>

using namespace std;

int main(){
    int number, divisor;
    cout << "Informe um number: ";
    cin >> number;
    cout << "Informe o Divisor: ";
    cin >> divisor;
    cout << "Numeros divisores por [" << divisor << "]" << endl;

    while(number > 0) {
        if(number % divisor == 0) {
            //Marca entre colchetes os number divisiveis
            cout << " [" << number << "]";
        } else {
            //Não marca os number divisiveis
            cout << " " << number;
        }
        number--;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int number;
    int tabuada;
    cout << "-------" << endl;
    cout << "TABUADA" << endl;
    cout << "-------" << endl;
    cout << "Informe um numero: ";
    cin >> number;

    for(int i = 0; i <= 10; i++) {
        tabuada = i * number;
        cout << number << " x " << i << " = " << tabuada << endl;
    }
    return 0;
}

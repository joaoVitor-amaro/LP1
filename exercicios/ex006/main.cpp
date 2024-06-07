#include <iostream>

using namespace std;

int main(){
    int lado1, lado2, lado3;
    cout << "Formador de  Triângulo" << endl;
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3: ";
    cin >> lado3;

    //Verifica se forma um triangulo
    if((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)) {
            cout << "Triangulo equilatero" << endl;
        } else if((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)) {
            cout << "Triangulo Isosceles" << endl;
        } else {
            cout << "Triangulo Escaleno" << endl;
        }
    } else {
        cout << "Nao forma um triangulo";
    }
    return 0;
}

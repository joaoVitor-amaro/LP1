#include <iostream>

using namespace std;

int main(){
    int number1, number2;

    cout << "Number 1:";
    cin >> number1;
    cout << "Number 2:";
    cin >> number2;

    if(number1 > number2) {
        cout << "O primeiro valor e o maior" << endl;
    } else if(number1 < number2) {
        cout << "O segundo valor e o maior" << endl;
    } else {
       cout << "Nao existe valor maior, os dois sao iguais" << endl;
    }

    return 0;
}

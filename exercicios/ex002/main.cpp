#include <iostream>

using namespace std;

int main(){
    int number, antecessor, sucessor;
    cout <<  "Informe um number: ";
    cin >> number;
    antecessor = number - 1;
    sucessor = number + 1;
    cout << "Number: " << number << endl;
    cout << "Antecessor: " << antecessor << endl;
    cout << "Sucessor: " << sucessor;
    return 0;
}

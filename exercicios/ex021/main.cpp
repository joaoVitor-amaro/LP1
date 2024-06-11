#include <iostream>

using namespace std;

int main(){
    int t1 = 1;
    int t2 = 1;
    int t3;
    int cont = 0;
    cout << "Fibonacci" << endl;
    cout << t1 << " ";
    cout << t2 << " ";
    while(cont <= 8) {
        //Soma dos uitimos 2 elementos
        t3 = t1 + t2;
        //Atualiza os valores de t1 e t2 para os próximos cálculos
        t1 = t2;
        t2 = t3;
        cout << t3 << " ";
        cont++;
     }
    return 0;
}

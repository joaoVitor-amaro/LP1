#include <iostream>

using namespace std;

int main(){
    int N;
    int cont = 0;
    int qt_Impar15 = 0;
    while(true) {
        cin >> N;
        if(N > 15) {
            if(N % 2 != 0) {
                qt_Impar15++;
            }
        }
        if(N == 0) {
            break;
        }
        cont++;
    }
    float percentual = (100*qt_Impar15)/cont;
    cout << percentual << "%";
    return 0;
}

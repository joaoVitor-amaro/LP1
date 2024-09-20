#include <iostream>

using namespace std;

int maximo(int n1, int n2, int n3) {
    int maiorNumber = n1;
    if(n2 > maiorNumber) {
        maiorNumber = n2;
    }
    if(n3 > maiorNumber) {
        maiorNumber = n3;
    }
    return maiorNumber;
}

int main(){
    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    int result = maximo(n1, n2, n3);
    cout << result;
    return 0;
}

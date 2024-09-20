#include <iostream>

using namespace std;

int verificarEsparca(int matriz[10][10], int linha, int coluna) {
    int qtZero = 0;
    float porcentagemZero;
    int total = linha * coluna;
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (matriz[i][j] == 0) {
                qtZero++;
            }
        }
    }
    return qtZero;
}

int main() {
    int matriz[10][10];
    int linha, coluna;
    cin >> linha;
    cin >> coluna;

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> matriz[i][j];
        }
    }

    // Verifica se é esparça
    int qt_zero = verificarEsparca(matriz, linha, coluna);
    int porcento = (qt_zero*100)/(linha*coluna);
    if (porcento>70) {
        cout << "A matriz é esparsa";
    } else {
        cout << "A matriz não é esparsa";
    }
    return 0;
}

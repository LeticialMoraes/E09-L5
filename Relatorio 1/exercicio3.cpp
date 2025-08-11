#include <iostream>
using namespace std;

void analisaNumeros() {
    int valor, pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        cin >> valor;
        if (valor % 2 == 0) pares++;
        else impares++;
        if (valor > 0) positivos++;
        else if (valor < 0) negativos++;
    }

    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;
    cout << "Quantidade de numeros positivos: " << positivos << endl;
    cout << "Quantidade de numeros negativos: " << negativos << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        analisaNumeros();
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Digite um numero entre 0 e 50: ";
        cin >> num;
    } while (num < 0 || num > 50);

    for (int i = num - 1; i > 0; i--) {
        cout << "Resto da divisao de " << num << " por " << i << ": " << num % i << endl;
    }

    return 0;
}

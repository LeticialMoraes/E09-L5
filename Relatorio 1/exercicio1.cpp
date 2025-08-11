#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int qtd;
    double preco, total;

    cout << "Digite a quantidade de laranjas: ";
    cin >> qtd;

    if (qtd >= 12)
        preco = 0.65;
    else
        preco = 0.80;

    total = preco * qtd;

    cout << fixed << setprecision(2);
    cout << "Preco da unidade: R$" << preco << endl;
    cout << "Preco total: R$" << total << endl;

    return 0;
}

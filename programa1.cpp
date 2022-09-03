#include<iostream>
using namespace std;

int main() {
    int codigo = 0;
    float quantidade;

    float preco = 0;

    while (true) {

        cout << "Digite codigo" << endl;
        cin >> codigo;

        if(codigo == -1) {
            break;
        }

        cout << "Digite a quantidade" << endl;
        cin >> quantidade;

        if(codigo == 1) {
            preco += quantidade * 15.0;
        } else if(codigo == 2) {
            preco = preco + quantidade * 3.0;
        } else if(codigo == 3) {
            preco = preco + quantidade * 5.0;
        } else {
            preco = preco + quantidade * 40.0;
        }
    }

    cout << "Preco total" << endl;
    cout << preco << endl;
}

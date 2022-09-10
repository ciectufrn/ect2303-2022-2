
#include<iostream>
using namespace std;

void imprimirHexadecimal(int n) {
    if(n < 10) {
        cout << n;
    } else {
        cout << (char) (n+55);
    }
}

int main() {

    while (true) {
        int n[3];
        for(int i = 0; i < 3; ++i) {
            cin >> n[i];
            if(n[i] < 0) {
                return 0;
            }
        }

        for(int i = 0; i < 3; ++i) {
            imprimirHexadecimal(n[i]/16);
            imprimirHexadecimal(n[i]%16);
        }

        cout << endl;
    }
}

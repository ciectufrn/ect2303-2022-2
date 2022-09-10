
#include<iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    while (true) {
        cin >> n1 >> n2 >> n3;
        if(n1 < 0 || n2 < 0 || n3 < 0) {
            return 0;
        }

        int p1 = n1/16;
        if(p1 < 10) {
            cout << p1;
        } else {
            cout << (char) (p1+55);
        }

        int p2 = n1%16;
        if(p2 < 10) {
            cout << p2;
        } else {
            cout << (char) (p2+55);
        }

        p1 = n2/16;
        if(p1 < 10) {
            cout << p1;
        } else {
            cout << (char) (p1+55);
        }

        p2 = n2%16;
        if(p2 < 10) {
            cout << p2;
        } else {
            cout << (char) (p2+55);
        }

        p1 = n3/16;
        if(p1 < 10) {
            cout << p1;
        } else {
            cout << (char) (p1+55);
        }

        p2 = n3%16;
        if(p2 < 10) {
            cout << p2;
        } else {
            cout << (char) (p2+55);
        }

        cout << endl;

    }

}

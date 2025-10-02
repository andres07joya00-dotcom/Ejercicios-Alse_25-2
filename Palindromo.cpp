#include <iostream>
#include <string>
using namespace std;

class Palindromo {
private:
    int numero;

public:
    Palindromo(int n) {
        numero = n;
    }

    bool esPalindromo() {
        string numStr = to_string(numero);
        int len = numStr.length();

        for (int i = 0; i < len / 2; i++) {
            if (numStr[i] != numStr[len - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    Palindromo p(n);

    if (p.esPalindromo()) {
        cout << n << " es un palindromo." << endl;
    } else {
        cout << n << " no es un palindromo." << endl;
    }

    return 0;
}


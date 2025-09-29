#include <iostream>
using namespace std;

// Callback functions for different operations
int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

// Function that performs an operation using a callback
void performOperation(int (*callback)(int, int), int x, int y)
{
    cout << "The result of the operation is: " << callback(x, 10) << endl;
    cout << "The result of the operation is: " << callback(x, y) << endl;
}

int operadores(){
    char operador;
    cout << "Operadores" << endl;
    cout << "(+). Suma" << endl;
    cout << "(-). Multiplicacion" << endl;
    cout << "(*). Resta" << endl;
    cout << "(/) Dvision" << endl;
    cout << "selecciones el operdor: " << endl;
    cin >> operador;
    return operador;
}
int main(){
    int A, B;
    char a;
    char opc='s';
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;

    while (opc == 's'){
        a= operadores();
        switch (a){
            case '+':
                cout << "La suma es: " ;
                performOperation(add, A, B);
                break;
            case '-':
                cout << "La resta es: " ;
                performOperation(subtract, A, B);
                break;
            case '*':
                cout << "La multiplicacion es: ";
                performOperation(multiply, A, B);
                break;
            default:
                cout << "Operador no valido." << endl;
                break;
        }
        cout << "Desea realizar otra operacion? (s/n): ";
        cin >> opc;

    }

    // Passing different functions as callbacks

    int (*operations[])(int, int) = {add, multiply, subtract};
    // Iterate over the array and call each operation
    for (int i = 0; i < 3; ++i)
    {
        cout << "Operation " << i + 1 << ": ";
        performOperation(operations[i], A, B);
    }
    return 0;
}
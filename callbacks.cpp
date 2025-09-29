#include <iostream>
using namespace std;

// Callback functions for different operations
double add(double a, double b)
{
    return a + b;
}

double multiply(double a, double b)
{
    return a * b;
}

double subtract(double a, double b)
{
    return a - b;
}

double division(double a, double b){

    return a / b;
}   
// Function that performs an operation using a callback
void performOperation(double (*callback)(double, double), double x, double y)
{
    cout << "The result of the operation is: " << callback(x, y) << endl;
    
}

int operadores(){
    char operador;
    cout << "Operadores" << endl;
    cout << "(+). Suma" << endl;
    cout << "(-). Resta" << endl;
    cout << "(*). Multiplicacion" << endl;
    cout << "(/) Dvision" << endl;
    cout << "selecciones el operdor: " << endl;
    cin >> operador;
    return operador;
}
int main(){
    double A, B;
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
            case '/':
                if (B != 0) {
                    cout << "La division es: ";
                    performOperation(division, A, B);
                } else {
                    cout << "Error: Division por cero no es permitida." << endl;
                }
                break;
            default:
                cout << "Operador no valido." << endl;
                break;
        }
        cout << "Desea realizar otra operacion? (s/n): ";
        cin >> opc;

    }

    // Passing different functions as callbacks

    double (*operations[])(double, double) = {add, multiply, subtract, division};
    // Iterate over the array and call each operation
    for (int i = 0; i < 4; ++i)
    {
        cout << "Operation " << i + 1 << ": ";
        performOperation(operations[i], A, B);
    }
    return 0;
}
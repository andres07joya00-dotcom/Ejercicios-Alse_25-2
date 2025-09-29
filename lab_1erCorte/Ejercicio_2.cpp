// CALCULO DE INTERES COMPUESTO
// FORMULA: A = P (1 + r/n)^(nt)

#include <iostream>
#include <cmath>

void interesc(double P, double r, double n, double t, double A){
    double interes;
    interes = P * pow((1 + r/n), (n*t));
    std::cout << "El monto total despues de " << t << " años es: " << interes << std::endl;
   
}

int main(){
    double P, r, n, t, A;

    std::cout << "Calculo de Interes Compuesto de la ECI PA" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    std::cout << "Ingrese el monto principal: ";
    std::cin >> P;
    std::cout << "Ingrese el porcentaje de tasa de interes anual: ";
    std::cin >> r;
    r = r / 100; 
    std::cout << "Ingrese el numero de veces que se apñica el interes por año: ";
    std::cin >> n;
    std::cout << "Ingrese el numero de años que el dinero es invertido: ";
    std::cin >> t;

    interesc(P, r, n, t, A);

    return 0;




}

// SUMA DE ELEMENTO DE UN ARRGLO
#include <iostream>

void suma(int arreglo[]){
    
}

int main(){

    int arreglo[5];

    for (int i = 0; i < 5; i++){
        std::cout << "ingrese el valor: ";
        std::cin >> arreglo[i];
    }
    std::cout << "elementos del arreglo: " << std::endl;

    int i=0;
    int j=0;
    while (i < 5) {
        j=i+1;
        std::cout << j << ". " << arreglo[i] << std::endl;
        i++;
    }
    suma(arreglo);

}
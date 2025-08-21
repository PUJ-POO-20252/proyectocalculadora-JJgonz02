#include <iostream>
#include "matematicas.h"

int main() {
    int x,y;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> x;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> y;

    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);
    int resultado_multiplicacion = multiplicar(x, y);
    int resultado_division = dividir(x, y);


    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Multiplicacion: " << resultado_multiplicacion << std::endl;
    std::cout << "Division: " << resultado_division << std::endl;

    return 0;
}
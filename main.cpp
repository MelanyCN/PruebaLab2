#include <iostream>

int main() {
    // Declaración de variables
    int num1, num2, suma;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;

    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    // Realizar la suma de los dos números
    suma = num1 + num2;

    // Mostrar el resultado
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;

    return 0;
}

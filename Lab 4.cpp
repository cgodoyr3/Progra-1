#include <iostream>
#include <cmath>

using namespace std;

// Declaración de funciones
float realizarOperacion(float num1, float num2, char operador);
void imprimirResultados(float resultado);

int main() {
    // Declaración de variables
    int cantidadOperaciones;
    float numero1, numero2, resultado;
    char operador;

    // Pide al usuario la cantidad de operaciones a realizar
    cout << "Ingrese la cantidad de operaciones a realizar: ";
    cin >> cantidadOperaciones;

    // Utiliza un bucle para realizar operaciones según la cantidad ingresada
    for (int i = 0; i < cantidadOperaciones; ++i) {
        // Pide al usuario datos para la operación
        cout << "\nOperacion #" << i + 1 << ":" << endl;
        cout << "Ingrese el primer numero: ";
        cin >> numero1;
        cout << "Ingrese el operador (+, -, *, /, %): ";
        cin >> operador;
        cout << "Ingrese el segundo numero: ";
        cin >> numero2;

        // Llama a la función para realizar la operación
        resultado = realizarOperacion(numero1, numero2, operador);

        // Llama a la función para imprimir resultados
        imprimirResultados(resultado);
    }

    // Fin del programa
    cout << "\nPrograma finalizado correctamente." << endl;

    return 0;
}

// Implementación de la función para realizar operaciones matemáticas
float realizarOperacion(float num1, float num2, char operador) {
    switch (operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            // Manejar la división por cero
            return (num2 != 0) ? num1 / num2 : NAN;
        case '%':
            // Manejar la operación de módulo con números no enteros
            return fmod(num1, num2);
        default:
            cout << "Operador no valido. Se utilizara la suma por defecto." << endl;
            return num1 + num2;
    }
}

// Implementación de la función para imprimir resultados
void imprimirResultados(float resultado) {
    if (!isnan(resultado)) {
        cout << "El resultado es: " << resultado << endl;
    } else {
        cout << "Error: Division por cero." << endl;
    }
}
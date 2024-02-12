#include<iostream>
#include<cmath>

using namespace std;

// Función para realizar operaciones aritméticas y de comparación
void operacionesNumeros(int num1, int num2) {
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    float division = static_cast<float>(num1) / num2;  // Convertir uno de los operandos a float para obtener un resultado decimal

    // Operadores de relación
    bool mayorQue = num1 > num2;
    bool menorQue = num1 < num2;
    bool igualQue = num1 == num2;

    // Mostrar resultados
    cout << "Resultados de operaciones aritmeticas:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;
    cout << "Division: " << division << endl;

    cout << "\nResultados de operadores de relacion:" << endl;
    cout << num1 << " > " << num2 << ": " << (mayorQue ? "true" : "false") << endl;
    cout << num1 << " < " << num2 << ": " << (menorQue ? "true" : "false") << endl;
    cout << num1 << " == " << num2 << ": " << (igualQue ? "true" : "false") << endl;
}

// Función para calcular potencia
double calcularPotencia(double base, int exponente) {
    // Manejar casos donde el exponente sea cero o negativo
    if (exponente == 0) {
        return 1;
    } else if (exponente < 0) {
        return 1 / pow(base, abs(exponente));
    } else {
        return pow(base, exponente);
    }
}

// Función para determinar si un número es primo
bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para determinar si un año es bisiesto
bool esBisiesto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int main() {
    int opcion;
    do {
        cout << "\nMenu de Opciones:" << endl;
        cout << "1. Operaciones con Numeros" << endl;
        cout << "2. Calcular Potencia" << endl;
        cout << "3. Determinar si un Numero es Primo" << endl;
        cout << "4. Determinar si un Anio es Bisiesto" << endl;
        cout << "5. Salir" << endl;

        cout << "Seleccione una opcion (1-5): ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int num1, num2;
                cout << "Ingrese el primer numero entero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero entero: ";
                cin >> num2;
                operacionesNumeros(num1, num2);
                break;
            }
            case 2: {
                double base;
                int exponente;
                cout << "Ingrese la base: ";
                cin >> base;
                cout << "Ingrese el exponente: ";
                cin >> exponente;
                double resultadoPotencia = calcularPotencia(base, exponente);
                cout << "Resultado de " << base << "^" << exponente << ": " << resultadoPotencia << endl;
                break;
            }
            case 3: {
                int numeroPrimo;
                cout << "Ingrese un numero para determinar si es primo: ";
                cin >> numeroPrimo;
                if (esPrimo(numeroPrimo)) {
                    cout << numeroPrimo << " es un numero primo." << endl;
                } else {
                    cout << numeroPrimo << " no es un numero primo." << endl;
                }
                break;
            }
            case 4: {
                int anoBisiesto;
                cout << "Ingrese un anio para determinar si es bisiesto: ";
                cin >> anoBisiesto;
                if (esBisiesto(anoBisiesto)) {
                    cout << anoBisiesto << " es un anio bisiesto." << endl;
                } else {
                    cout << anoBisiesto << " no es un anio bisiesto." << endl;
                }
                break;
            }
            case 5:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no valida. Por favor, seleccione una opcion valida." << endl;
        }
    } while (opcion != 5);

    return 0;
}
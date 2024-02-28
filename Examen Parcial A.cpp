#include <iostream>
#include <cmath>

using namespace std;


bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int opcion;

    do {
        cout << "Menu:\n";
        cout << "1. Suma, resta, multiplicacion y division de dos numeros\n";
        cout << "2. Suma de todos los numeros enteros desde 1 hasta n\n";
        cout << "3. Verificar si un numero es primo\n";
        cout << "4. Calcular la raiz cuadrada de un numero\n";
        cout << "0. Salir\n";
        cout << "Ingrese la opcion deseada: ";
        cin >> opcion;

    switch (opcion) {
            case 1: {
                int a, b;
                cout << "Ingresa el valor de a: ";
                cin >> a;
                cout << "Ingresa el valor de b: ";
                cin >> b;

                cout << "Suma: " << a + b << endl;
                cout << "Resta: " << a - b << endl;
                cout << "Multiplicacion: " << a * b << endl;

                
                if (b != 0) {
                    cout << "Division: " << static_cast<double>(a) / b << endl;
                } else {
                    cout << "No se puede dividir por cero." << endl;
                }

                break;
            }
            case 2: {
                int n;
                cout << "Ingresa un numero entero positivo n: ";
                cin >> n;

                int suma = 0;
                for (int i = 1; i <= n; i++) {
                    suma += i;
                }
                cout << "La suma de los numeros enteros desde 1 hasta " << n << " es: " << suma << endl;

                break;
            }
            case 3: {
                int Primo;
                cout << "Ingresa un numero para verificar si es primo: ";
                cin >> Primo;

                if (esPrimo(Primo)) {
                    cout << Primo << " es un numero primo." << endl;
                } else {
                    cout << Primo << " no es un numero primo." << endl;
                }

                break;
            }
            case 4: {
                double Raiz;
                cout << "Ingresa un numero para calcular su raiz cuadrada: ";
                cin >> Raiz;

                if (Raiz >= 0) {
                    cout << "La raiz cuadrada de " << Raiz << " es: " << sqrt(Raiz) << endl;
                } else {
                    cout << "No se puede calcular la raiz cuadrada de un numero negativo." << endl;
                }

                break;
            }
            case 0:
                cout << "Saliendo del programa. Adios.\n";
                break;
            default:
                cout << "Opcion no válida. Inténtelo de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}

#include <iostream>

using namespace std;

// Funciones
int sumaParesImpares(int numero, bool sumarPares) {
    int suma = 0;
    for (int i = 1; i <= numero; i++) {
        if ((i % 2 == 0) == sumarPares) {
            suma += i;
        }
    }
    return suma;
}

int factorial(int numero) {
    int resultado = 1;
    while (numero > 0) {
        resultado *= numero;
        numero--;
    }
    return resultado;
}

int contarDigitos(int numero) {
    int contador = 0;
    do {
        contador++;
        numero /= 10;
    } while (numero != 0);
    return contador;
}

void ordenarNumeros(int& a, int& b, int& c) {
    if (a > b) {
        std::swap(a, b);
    }
    if (b > c) {
        std::swap(b, c);
    }
    if (a > b) {
        std::swap(a, b);
    }
}

int sumaDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

// Menu principal
int main() {
    int opcion;
    int numero;

    do {
        // Menú de opciones
        cout << "\nMenu:\n";
        cout << "1. Suma de numeros pares e impares\n";
        cout << "2. Factorial con bucle while\n";
        cout << "3. Contador de digitos\n";
        cout << "4. Ordenamiento de numeros (ascendente)\n";
        cout << "5. Suma de digitos de un numero\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Realizar operación según la opción seleccionada
        switch (opcion) {
            case 1:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Suma de pares hasta " << numero << ": " << sumaParesImpares(numero, true) << std::endl;
                cout << "Suma de impares hasta " << numero << ": " << sumaParesImpares(numero, false) << std::endl;
                break;
            case 2:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Factorial de " << numero << ": " << factorial(numero) << std::endl;
                break;
            case 3:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Cantidad de digitos en " << numero << ": " << contarDigitos(numero) << std::endl;
                break;
            case 4:
                int a, b, c;
                cout << "Ingrese tres numeros separados por espacios: ";
                cin >> a >> b >> c;
                ordenarNumeros(a, b, c);
                cout << "Numeros ordenados: " << a << ", " << b << ", " << c << std::endl;
                break;
            case 5:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Suma de digitos de " << numero << ": " << sumaDigitos(numero) << std::endl;
                break;
            case 0:
                cout << "Saliendo del programa. Adios!\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 0);

    return 0;
}

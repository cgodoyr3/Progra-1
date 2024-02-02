#include<iostream>

using namespace std;

// Funciones
void verificarPar();
void determinarBisiesto();
void compararNumeros();
void verificarMayorEdad();
void evaluarExamen();

int main() {
    int opcion;

    do {
        // Menú
        cout << "Menu:" << endl;
        cout << "1. Verificar si un numero ingresado es par." << endl;
        cout << "2. Determinar si un año ingresado es bisiesto o no." << endl;
        cout << "3. Comparar dos numeros." << endl;
        cout << "4. Verificar si una persona es mayor de edad." << endl;
        cout << "5. Evaluar si un estudiante aprobo un examen." << endl;
        cout << "0. Salir." << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        // Ejecutar función según la opción seleccionada
        switch (opcion) {
            case 1:
                verificarPar();
                break;
            case 2:
                determinarBisiesto();
                break;
            case 3:
                compararNumeros();
                break;
            case 4:
                verificarMayorEdad();
                break;
            case 5:
                evaluarExamen();
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}

void verificarPar() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero es par." << endl;
    } else {
        cout << "El numero no es par." << endl;
    }
}

void determinarBisiesto() {
    int anio;
    cout << "Ingrese un año: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "El año es bisiesto." << endl;
    } else {
        cout << "El año no es bisiesto." << endl;
    }
}

void compararNumeros() {
    int numero1, numero2;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 == numero2) {
        cout << "Los numeros son iguales." << endl;
    } else {
        cout << "Los numeros no son iguales." << endl;
    }
}

void verificarMayorEdad() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }
}

void evaluarExamen() {
    float calificacion;
    cout << "Ingrese la calificacion del estudiante: ";
    cin >> calificacion;

    if (calificacion >= 60) {
        cout << "El estudiante aprobo el examen." << endl;
    } else {
        cout << "El estudiante no aprobo el examen." << endl;
    }
}

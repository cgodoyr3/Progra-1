#include <iostream>
#include <string>

using namespace std;

// Declaraciones de las clases

class Libro {
private:
    string titulo;
    string autor;
    int anoPublicacion;

public:
    Libro(string t, string a, int ano) : titulo(t), autor(a), anoPublicacion(ano) {}

    void establecerDatos(string t, string a, int ano) {
        titulo = t;
        autor = a;
        anoPublicacion = ano;
    }

    void mostrarInformacion() {
        cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nAnio de Publicacion: " << anoPublicacion << endl;
    }
};

class Estudiante {
private:
    string nombre;
    string apellido;
    int edad;
    string curso;

public:
    Estudiante(string n, string a, int e, string c) : nombre(n), apellido(a), edad(e), curso(c) {}

    void establecerDatos(string n, string a, int e, string c) {
        nombre = n;
        apellido = a;
        edad = e;
        curso = c;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << "\nApellido: " << apellido << "\nEdad: " << edad << "\nCurso: " << curso << endl;
    }
};

class Calculadora {
private:
    double numero1;
    double numero2;

public:
    Calculadora(double n1, double n2) : numero1(n1), numero2(n2) {}

    double suma() {
        return numero1 + numero2;
    }

    double resta() {
        return numero1 - numero2;
    }

    double multiplicacion() {
        return numero1 * numero2;
    }

    double division() {
        if (numero2 != 0) {
            return numero1 / numero2;
        } else {
            cout << "Error: Division por cero." << endl;
            return 0;
        }
    }
};

class CuentaBancaria {
private:
    string nombreTitular;
    string numeroCuenta;
    double saldo;

public:
    CuentaBancaria(string nombre, string numCuenta, double inicial) : nombreTitular(nombre), numeroCuenta(numCuenta), saldo(inicial) {}

    void depositar(double cantidad) {
        saldo += cantidad;
    }

    void retirar(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            cout << "Error: Saldo insuficiente." << endl;
        }
    }

    void consultarSaldo() {
        cout << "Saldo actual: $" << saldo << endl;
    }
};

class Pelicula {
private:
    string titulo;
    string director;
    int anoLanzamiento;

public:
    Pelicula(string t, string d, int ano) : titulo(t), director(d), anoLanzamiento(ano) {}

    void establecerDatos(string t, string d, int ano) {
        titulo = t;
        director = d;
        anoLanzamiento = ano;
    }

    void mostrarInformacion() {
        cout << "Titulo: " << titulo << "\nDirector: " << director << "\nAnio de Lanzamiento: " << anoLanzamiento << endl;
    }
};

// Función para mostrar el menú y ejecutar el programa seleccionado

void mostrarMenu() {
    cout << "MENU:\n";
    cout << "1. Gestion de libros en una biblioteca\n";
    cout << "2. Registro de estudiantes\n";
    cout << "3. Calculadora simple\n";
    cout << "4. Gestion de cuentas bancarias\n";
    cout << "5. Registro de peliculas\n";
    cout << "0. Salir\n";
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cout << "Ingrese el numero del programa (0 para salir): ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Programa de gestión de libros
                Libro libro("Cien anios de soledad", "Gabriel Garcia Marquez", 1967);
                libro.mostrarInformacion();
                break;
            }
            case 2: {
                // Programa de registro de estudiantes
                Estudiante estudiante("Juan", "Perez", 20, "Ingenieria");
                estudiante.mostrarInformacion();
                break;
            }
            case 3: {
                // Programa de calculadora simple
                Calculadora calc(10.5, 5.2);
                cout << "Suma: " << calc.suma() << "\nResta: " << calc.resta() << "\nMultiplicacion: " << calc.multiplicacion()
                    << "\nDivision: " << calc.division() << endl;
                break;
            }
            case 4: {
                // Programa de gestión de cuentas bancarias
                CuentaBancaria cuenta("Juan Perez", "123456789", 1000.0);
                cuenta.depositar(500.0);
                cuenta.retirar(200.0);
                cuenta.consultarSaldo();
                break;
            }
            case 5: {
                // Programa de registro de películas
                Pelicula pelicula("El Padrino", "Francis Ford Coppola", 1972);
                pelicula.mostrarInformacion();
                break;
            }
            case 0:
                cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                cout << "Opción no valida. Por favor, ingrese un número válido.\n";
        }
    } while (opcion != 0);

    return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Clase Empleado
class Empleado {
private:
    string nombre;
    string apellido;
    int edad;
    double salario;

public:
    Empleado(const string& nombre, const string& apellido, int edad, double salario)
        : nombre(nombre), apellido(apellido), edad(edad), salario(salario) {}

    friend ostream& operator<<(ostream& os, const Empleado& empleado) {
        os << empleado.nombre << "," << empleado.apellido << "," << empleado.edad << "," << empleado.salario;
        return os;
    }
};

// Función para ingresar datos de empleados y almacenarlos en empleados.txt
void ingresarEmpleados() {
    ofstream archivo("d:\\empleados.txt", ios::app);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo de empleados." << endl;
        return;
    }

    string nombre, apellido;
    int edad;
    double salario;
    while (true) {
        cout << "Ingrese el nombre del empleado (o 'salir' para terminar): ";
        getline(cin, nombre);
        if (nombre == "salir") {
            break;
        }
        cout << "Ingrese el apellido del empleado: ";
        getline(cin, apellido);
        cout << "Ingrese la edad del empleado: ";
        cin >> edad;
        cout << "Ingrese el salario del empleado: ";
        cin >> salario;
        cin.ignore(); // Limpiar el buffer del teclado
        Empleado empleado(nombre, apellido, edad, salario);
        archivo << empleado << endl;
    }
    archivo.close();
    cout << "Datos de empleados ingresados correctamente." << endl;
}

// Función principal
int main() {
    ingresarEmpleados();
    return 0;
}

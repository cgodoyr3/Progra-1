#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Empleado {
    string nombre;
    string apellido;
    int edad;
    float salario;
};


void buscarEmpleado(const string& nombreCompleto, ifstream& archivo) {
    Empleado empleado;
    bool encontrado = false;


    while (archivo >> empleado.nombre >> empleado.apellido >> empleado.edad >> empleado.salario) {
     
        if (empleado.nombre + " " + empleado.apellido == nombreCompleto) {
            encontrado = true;
            cout << "Información del empleado:" << endl;
            cout << "Nombre: " << empleado.nombre << endl;
            cout << "Apellido: " << empleado.apellido << endl;
            cout << "Edad: " << empleado.edad << endl;
            cout << "Salario: " << empleado.salario << endl;
            break;
        }
    }

   
    if (!encontrado) {
        cout << "Empleado no encontrado." << endl;
    }
}

int main() {
    ifstream archivo("d:\\empleados.txt");
    string nombreCompleto;
    char continuar;

    
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

   
    do {
       
        cout << "Ingrese el nombre completo del empleado (nombre apellido): ";
        getline(cin, nombreCompleto);

       
        buscarEmpleado(nombreCompleto, archivo);

        
        cout << "¿Desea realizar otra consulta? (s/n): ";
        cin >> continuar;
        cin.ignore(); 
    } while (continuar == 's' || continuar == 'S');

   
    archivo.close();

    return 0;
}

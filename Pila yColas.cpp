#include <iostream>
#include <stack>
#include <queue>

using namespace std;

struct Task {
    string description;
    
};

class TaskManager {
private:
    stack<Task> taskStack; 
    queue<Task> taskQueue; 

public:
    void addTask(const Task& task) {
        taskStack.push(task); 
        taskQueue.push(task); 
        cout << "Tarea agregada correctamente." << endl;
    }

    void completeLastTask() {
        if (!taskStack.empty()) {
            taskStack.pop(); 
            cout << "Última tarea completada y eliminada." << endl;
        } else {
            cout << "No hay tareas pendientes." << endl;
        }
    }

    void attendOldestTask() {
        if (!taskQueue.empty()) {
            taskQueue.pop(); 
            cout << "Tarea más antigua atendida y eliminada." << endl;
        } else {
            cout << "No hay tareas pendientes." << endl;
        }
    }

    void showAllTasks() {
        cout << "Lista de tareas:" << endl;
        cout << "Pila de tareas:" << endl;
        while (!taskStack.empty()) {
            cout << "- " << taskStack.top().description << endl;
            taskStack.pop();
        }
        cout << "Cola de tareas:" << endl;
        while (!taskQueue.empty()) {
            cout << "- " << taskQueue.front().description << endl;
            taskQueue.pop();
        }
    }
};

int main() {
    TaskManager taskManager;
    int choice;

    do {
        cout << "Seleccione una opción:" << endl;
        cout << "1. Agregar tarea" << endl;
        cout << "2. Completar última tarea" << endl;
        cout << "3. Atender tarea más antigua" << endl;
        cout << "4. Mostrar todas las tareas" << endl;
        cout << "5. Salir" << endl;
        cin >> choice;

        switch(choice) {
            case 1: {
                string description;
                cout << "Ingrese la descripción de la tarea: ";
                cin.ignore(); 
                getline(cin, description);
                Task newTask = {description};
                taskManager.addTask(newTask);
                break;
            }
            case 2:
                taskManager.completeLastTask();
                break;
            case 3:
                taskManager.attendOldestTask();
                break;
            case 4:
                taskManager.showAllTasks();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    } while (choice != 5);

    return 0;
}

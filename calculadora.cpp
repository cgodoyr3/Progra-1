#include<iostream>

using namespace std;


float suma(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);

int main() {

    float num1, num2;

    
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    
    cout << "Suma: " << suma(num1, num2) << endl;
    cout << "Resta: " << resta(num1, num2) << endl;
    cout << "Multiplicacion: " << multiplicacion(num1, num2) << endl;

   
    if (num2 != 0) {
        cout << "Division: " << division(num1, num2) << endl;
    } else {
        cout << "No es posible dividir por cero." << endl;
    }

    return 0;
}


float suma(float num1, float num2) {
    return num1 + num2;
}

float resta(float num1, float num2) {
    return num1 - num2;
}

float multiplicacion(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    return num1 / num2;
}

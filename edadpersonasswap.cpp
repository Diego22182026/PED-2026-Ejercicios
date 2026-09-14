#include <iostream>
using namespace std;

struct Persona {
    int edad;
    float altura;
};

void intercambiarEdades(Persona* p1, Persona* p2) {
    if (p1->edad < p2->edad) {
        int temp = p1->edad;
        p1->edad = p2->edad;
        p2->edad = temp;
    }
}

int main() {
    Persona persona1, persona2;

    cout << "Ingrese la edad de la persona 1: ";
    cin >> persona1.edad;

    cout << "Ingrese la altura de la persona 1: ";
    cin >> persona1.altura;

    cout << "Ingrese la edad de la persona 2: ";
    cin >> persona2.edad;

    cout << "Ingrese la altura de la persona 2: ";
    cin >> persona2.altura;

    cout << "\nAntes del intercambio:" << endl;
    cout << "Persona 1 - Edad: " << persona1.edad << endl;
    cout << "Persona 2 - Edad: " << persona2.edad << endl;

    intercambiarEdades(&persona1, &persona2);

    cout << "\nDespues del intercambio:" << endl;
    cout << "Persona 1 - Edad: " << persona1.edad << endl;
    cout << "Persona 2 - Edad: " << persona2.edad << endl;

    return 0;
}
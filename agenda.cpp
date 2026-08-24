#include <iostream>
using namespace std;

struct Contacto{

    string nombre, telefono, email;
};

const int contactos_max = 100;
Contacto Agenda[contactos_max];

void mostrarAgenda(Contacto agenda[], int n){
    cout << "Agenda de contactos: " << endl;

    if (n = 0){
        cout << "No hay contactos " << endl;
        return;
    }

    for (int i = 0; i < n; i++){
        cout << "Nombre: " << agenda[i].nombre << endl;
        cout << "Telefono " << agenda[i].telefono << endl;
        cout << "Email " << agenda[i].email << endl;
    }


}
int main (){


    return 0;
}
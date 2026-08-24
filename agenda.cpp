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

    int agregarContacto(Contacto agenda[], int n){

        if(n >= contactos_max){

            cout << "Agenda llena " << endl;
            return n; 
        }

        Contacto nuevo_contacto;
        cout << "Ingrese el nombre: " << endl;
        getline(cin >> ws, nuevo_contacto.nombre);
        cout << "Ingrese el telefono: " << endl;
        getline(cin, nuevo_contacto.telefono);
        cout << "Ingrese el email: " << endl;
        getline(cin, nuevo_contacto.email);


        agenda[n] = nuevo_contacto;
        return n + 1;
    }


int main (){


    return 0;
}
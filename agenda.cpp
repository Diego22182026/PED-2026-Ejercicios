#include <iostream>
using namespace std;

struct Contacto{

    string nombre, telefono, email;
};

const int contactos_max = 100;
Contacto Agenda[contactos_max];
int totalContactos;

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

    int buscarContacto(Contacto agenda[], int n, string nombre){

        for (int i = 0; i < n; i++){
            if (agenda[i].nombre == nombre){
                return i;
            }
        }
    // Si el for termina y jamas se encontro el elemento
        return -1;
    }

void mostrarEncontrado(Contacto agenda[], int n){

    string nombre;
    cout << "Nombre del contacto que desea mostrar: ";
    getline (cin>>ws, nombre);

    int pos = buscarContacto(agenda, n, nombre);

    if (pos == -1){

        cout << "No se encuentra el contacto " << endl;
        return;
    }

    cout << "Contacto en la posicion " << pos << endl;
    cout << "Nombre: " << agenda[pos].nombre << endl;
    cout << "Telefono: " << agenda[pos].telefono << endl;
    cout << "Email: " << agenda[pos].email << endl;

}

void mostrarMenu(){

    cout << "Seleccione una opcion: " <<endl;
    cout << "1. Mostrar agenda completa " <<endl;
    cout << "2. Agregar contacto nuevo" <<endl;
    cout << "3. Mostrar contacto encontrado " <<endl;
}

void ejecutarAgenda(){

    int opc;
    do{
        mostrarMenu();
        cin >> opc;

            switch (opc){
                
                case (1):
                    mostrarAgenda(Agenda, totalContactos);
                    break;
                
                case (2):
                    totalContactos = agregarContacto(Agenda, totalContactos);
                    break;

                case (3):
                    mostrarEncontrado(Agenda, totalContactos);
                    break;

                default:

                cout << "Error" << endl;

            }
    }while (opc != 4);
}

int main (){


    return 0;
}
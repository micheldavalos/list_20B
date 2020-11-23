#include <iostream>
#include "seleccion.h"
#include <vector>
#include "menuseleccion.h"
using namespace std;

int main() {
    /*Seleccion mexico("Mexico");

    Jugador j1("CUCEI", 43);
    Jugador j2("CUCBA", 33, 1);
    Jugador j3("CUCEA", 23, 3);
    Jugador j4("CUCS", 13);

    mexico.agregarInicio(j1);
    mexico.agregarFinal(j2);
    mexico.agregarFinal(j3);
    mexico.agregarFinal(j4);

    mexico.print();
    cout << endl;

    // mexico.eliminarNombre("CUCBA");
    // mexico.eliminarGoles(3);

    // mexico.ordenarNombre();
    // mexico.ordenarNumero();
    mexico.ordenarGoles();

    mexico.print();*/

    vector<Seleccion> mundial;
    string op;

    while (true)
    {
        cout << "1) Agregar Seleccion" << endl;
        cout << "2) Elegir Seleccion" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if (op == "1") {
            string nombre;
            Seleccion seleccion;

            cout << "Nombre: ";
            getline(cin, nombre);

            seleccion.setNombre(nombre);

            mundial.push_back(seleccion);

        } else if (op == "2") {
            if (mundial.empty()) {
                cout << "No hay selecciones" << endl;
            } else {
                for (size_t i = 0; i < mundial.size(); i++) {
                    Seleccion &seleccion = mundial[i];

                    cout << i + 1 << ") ";
                    cout << seleccion.getNombre() << endl;
                }
                cout << "0) Salir" << endl;

                size_t ops;
                cin >> ops; cin.ignore();

                if (ops > mundial.size()) {
                    cout << "Opción incorrecta" << endl;
                } else if (ops != 0) {
                    Seleccion &seleccion = mundial[ops-1];

                    menu(seleccion);
                }
            }
        } else if (op == "0") {
            break;
        }
    }
    
    
    return 0;
}
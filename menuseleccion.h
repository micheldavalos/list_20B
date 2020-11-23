#include "seleccion.h"

Jugador capturar()
{
    Jugador j;
    string nombre;
    size_t numero;
    size_t goles;

    cout << "Nombre: ";
    getline(cin, nombre);
    j.setNombre(nombre);

    cout << "Numero: ";
    cin >> numero;
    j.setNumero(numero);
    
    cout << "Goles: ";
    cin >> goles; cin.ignore();
    j.setGoles(goles);

    return j;
}

void menu(Seleccion &s)
{
    string op;

    while (true)
    {
        cout << "1) Agregar Inicio" << endl;
        cout << "2) Agregar Final" << endl;
        cout << "3) Mostrar" << endl;
        cout << "4) Ordenar Nombre" << endl;
        cout << "5) Ordenar Numero" << endl;
        cout << "6) Ordenar Goles" << endl;
        cout << "7) Eliminar Nombre" << endl;
        cout << "8) Eliminar Goles" << endl;
        cout << "9) Eliminar Goles = g" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if (op == "1") {
            s.agregarInicio(capturar());
        } else if (op == "2") {
            Jugador j = capturar();
            s.agregarFinal(j);
        } else if (op == "3") {
            s.print();
        } else if (op == "4") {
            s.ordenarNombre();
        } else if (op == "5") {
            s.ordenarNumero();
        } else if (op == "6") {
            s.ordenarGoles();
        } else if (op == "7") {
            string nombre;

            cout << "Nombre: ";
            getline(cin, nombre);

            s.eliminarNombre(nombre);
        } else if (op == "8") {
            s.eliminarGoles();
        } else if (op == "9") {
            size_t goles;

            cout << "Goles: ";
            cin >> goles; cin.ignore();

            s.eliminarGoles(goles);
        } else if (op == "0") {
            break;
        }
    }
    
}
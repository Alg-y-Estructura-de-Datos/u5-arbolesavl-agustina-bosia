#include <iostream>
#include "Arbol/ArbolBinarioAVL.h"
using namespace std;

/*Ejercicio N°1
Un almacén necesita gestionar su inventario de productos. Cada producto tiene un número único de identificación (ID), y el sistema debe mantener el inventario organizado para realizar búsquedas rápidas de productos y permitir actualizaciones del stock.
Utilizar un árbol AVL para almacenar los IDs de los productos. El árbol debe mantenerse balanceado para garantizar búsquedas rápidas.
Crear un sistema con un menú que permita gestionar las siguientes opciones:
1.Insertar un código de producto.
2.Eliminar un código de producto.
3.Buscar un producto por código.
4.Imprimir el árbol (mostrando su estructura balanceada).
5.Salir del programa.
*/

int main() {

    ArbolBinarioAVL<int> arbol;
    bool c=true;
    int op;

     while (c)
    {
        cout<<"quiere: 1.Insertar un código de producto. \n 2.Eliminar un código de producto. \n 3.Buscar un producto por código. \n 4.Imprimir el árbol (mostrando su estructura balanceada). \n 5.Salir del programa.\n";
        cin>>op;

        switch (op){
        case 1:
            cout<<"ingrese el codigo del producto: \n";
            cin>>op;
            arbol.put(op);

            break;
        case 2:
            cout<<"ingrese el codigo del producto a eliminar: \n";
            cin>>op;
            arbol.remove(op);

            break;
        case 3:
            cout<<"ingrese el codigo del producto a buscar: \n";
            cin>>op;
            cout<<"Se ha encontrado la identificación "<<arbol.search(op);
            break;

        case 4:
            arbol.print();
            break;

        default:
            cout<<"Saliendo del programa...";
            return 0;
            break;
        }
    }



    return 0;
}

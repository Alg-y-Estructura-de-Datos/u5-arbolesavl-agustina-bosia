#include <iostream>
#include "Arbol/ArbolBinarioAVL.h"
using namespace std;
/*
Ejercicio N°2
Imagina que trabajas en una tienda que vende una variedad de productos. Cada producto tiene un código único que lo identifica y necesitas gestionar el inventario utilizando un árbol AVL para asegurarte de que el sistema esté optimizado y balanceado. Los productos se identifican únicamente por su código, y no hay productos duplicados en el inventario.
Opciones del menú:
1.Agregar producto: Inserta un nuevo código de producto en el sistema.
2.Eliminar producto: Elimina un código de producto del sistema.
3.Buscar producto: Verifica si un código de producto existe en el inventario.
4.Mostrar inventario: Imprime el árbol AVL de productos para mostrar su estructura balanceada.
5.Salir: Finaliza el programa.
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
            try {
                arbol.put(op);
                cout << "El artículo "<<op<<" ha sido agregado " <<endl;
            } catch (int e) {
                if (e == 200) {
                    cout << "El artículo no se puede repetir" << endl;
                }
            }

            break;
        case 2:
            cout<<"ingrese el codigo del producto a eliminar: \n";
            cin>>op;
            arbol.remove(op);

            break;
        case 3:
            cout<<"ingrese el codigo del producto a buscar: \n";
            cin>>op;
            try {
                int libro = arbol.search(4001);
                cout << "El artículo "<<libro<<" sigue en inventario " <<endl;
            } catch (int e) {
                if (e == 404) {
                    cout << "El artículo no sigue en inventario" << endl;
                }
            }

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

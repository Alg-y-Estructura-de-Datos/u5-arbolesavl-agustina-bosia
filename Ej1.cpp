#include <iostream>
#include "Arbol/ArbolBinarioAVL.h"
using namespace std;

/**/

int main() {

    ArbolBinarioAVL<int> arbol;

    for (int i=0;i<15;i++){
        arbol.put(i);
        arbol.print();
        cout<<arbol.getBalance();
    }


    return 0;
}

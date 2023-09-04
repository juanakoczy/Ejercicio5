#include <stdio.h>
#include "Productos.h"

int main() {

    int cant;
    printf ("Ingrese la cantidad de productos:");
    scanf ("%d",&cant);

    Producto newProducto[cant];
    cargar (newProducto,cant);
    faltante (newProducto,cant);

    return 0;
}

//
// Created by Usuario on 2/9/2023.
//

#ifndef EJERCICIO5_PRODUCTOS_H
#define EJERCICIO5_PRODUCTOS_H

typedef struct producto {

    int codigo;
    char nombre[20];
    int stock;
    int stockmin;

}Producto;

void cargar (Producto newProducto[], int cant);

void faltante (Producto newProducto[], int cant);

#endif //EJERCICIO5_PRODUCTOS_H

//
// Created by Usuario on 2/9/2023.
//

#include "Productos.h"
#include "stdio.h"

void cargar (struct producto newProducto[], int cant){


    for (int i = 0; i < cant; i++){
        printf("Ingrese el codigo del producto %d:", i+1);
        scanf ("%d", &newProducto[i].codigo);
        printf("Ingrese el nombre del producto:");
        fflush(stdin);
        scanf ("%s", &newProducto[i].nombre[20]);
        printf("Ingrese el stock del producto:");
        scanf ("%d",&newProducto[i].stock);
        printf("Ingrese el stock minimo del producto:");
        scanf ("%d",&newProducto[i].stockmin);
    }
}

void faltante (struct producto newProducto[], int cant){

    for (int i = 0; i < cant; i++) {
        if (newProducto[i].stock < newProducto[i].stockmin) {
            printf("Faltan %d unidades del producto %d.\n", newProducto[i].stockmin-newProducto[i].stock, newProducto[i].codigo);

        }
    }
}
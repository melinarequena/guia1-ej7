//
// Created by Administrador on 5/5/2023.
//
#include<stdio.h>
#include "Cuenta.h"
void listado(Movimiento *movimientos, Cliente *clientes, int n){
    int s=0, e=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(clientes[i].CuentaCte == movimientos[j].CuentaCte){
                if(movimientos[j].Codigo == 1){
                    printf("%d: %.2f", clientes[i].CuentaCte, clientes[i].Saldo + movimientos[j].Importe);
                    e++;
                }else
                    printf("%d: %.2f", clientes[i].CuentaCte, clientes[i].Saldo - movimientos[i].Importe);
                s++;

            }
        }
    }
    printf("Salidas totales:\n", s);
    printf("Entradas totales:\n", e);
}

int mayor(Movimiento *movimientos, int n){
    int mayor = movimientos[0].Importe, pos;
    for(int i=0; i<n; i++){
        if(movimientos[i].Importe>mayor){
            mayor = movimientos[i].Importe;
            pos = i;
        }
    }
    return pos;
}
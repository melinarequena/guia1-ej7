//
// Created by Administrador on 5/5/2023.
//

#ifndef GUIA1_EJ7_CUENTA_H
#define GUIA1_EJ7_CUENTA_H

typedef struct{
    int CuentaCte;
    int Codigo; //1Entrada, 0Salida
    float Importe;
}Movimiento;

typedef  struct{
    int CuentaCte;
    float Saldo;
}Cliente;

void listado(Movimiento *movimientos, Cliente *clientes, int);
int mayor(Movimiento *movimientos, int);

#endif //GUIA1_EJ7_CUENTA_H

/* Se dispone de la siguiente información almacenada en un arreglo de no más de 100
registros: Nro de cta. cte. y saldo.
Se ingresan todos los movimientos efectuados en el día especificado: Nro de cuenta
cte, código de movimiento (1- entrada, 2- salida) el importe. La entrada finalizará
cuando se ingrese nro de cta cte igual a –1.
El programa deberá:
a. Mostrar un listado ordenado por número de cuenta corriente detallando nro
de cta cte y saldo final.
b. Importe total de entradas.
c. Importe total de salidas.
d. Del mayor movimiento del día: nro de cta cte, importe, si fue ingreso o
egreso.*/

#include<stdio.h>
#include<stdlib.h>

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

int main(){
    int i=0, pos, n;

    Cliente *clientes = malloc(i*sizeof(clientes));
    while(i<100 || clientes[i].CuentaCte!=-1){
        printf("Ingrese numero de cuenta corriente del cliente %d", i+1);
        scanf("%d", &clientes[i].CuentaCte);
        printf("Ingrese salgo del cliente %d", i+1);
        scanf("%.2f", &clientes[i].Saldo);
        i++;
    }
    Movimiento *movimientos = malloc(i*sizeof(movimientos));
    for(int j=0; j<i; j++){
        printf("Ingrese numero de cuenta corriente del movimiento:\n");
        scanf("%d", &movimientos[j].CuentaCte);
        printf("Ingrese codigo:\n1 Entrada\n2 Salida\n");
        scanf("%d", &movimientos[j].Codigo);
        printf("Ingrese importe  extraido/acreditado\n");
        scanf("%d", &movimientos[j].Importe);
    }
    listado(movimientos, clientes, i);
    pos = mayor(movimientos, n);
    printf("El mayor movimiento realizado fue por la cuenta %d, Con codigo %d, Importe: %.2f", movimientos[pos].CuentaCte, movimientos[pos].Codigo, movimientos[pos].Importe);
    return 0;
}

